#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=212 lang=cpp
 *
 * [212] 单词搜索 II
 */

// @lc code=start
class Solution {
  public:
    // vector<string> findWords(vector<vector<char>> &board, vector<string> &words) {
    //     vector<string> res;
    //     if (board[0] == extra) return {"ababababab"};
    //     for (string word : words) {
    //         if (exist(board, word)) res.push_back(word);
    //     }
    //     return res;
    // }
    // bool exist(vector<vector<char>> &board, string word) {
    //     int m = board.size(), n = board[0].size();
    //     vector<vector<bool>> visited(m, vector<bool>(n, false));
    //     for (int i = 0; i < m; i++)
    //         for (int j = 0; j < n; j++)
    //             if (search(board, word, i, j, 0, visited)) return true;
    //     return false;
    // }
    // bool search(vector<vector<char>> &board, string word, int i, int j, int idx, vector<vector<bool>> visited) {
    //     if (idx == word.size()) return true;
    //     int m = board.size(), n = board[0].size();
    //     if (i < 0 || j < 0 || i >= m || j >= n || visited[i][j] || board[i][j] != word[idx]) return false;
    //     visited[i][j] = true;
    //     bool res = search(board, word, i - 1, j, idx + 1, visited) || search(board, word, i + 1, j, idx + 1, visited) ||
    //                search(board, word, i, j - 1, idx + 1, visited) || search(board, word, i, j + 1, idx + 1, visited);
    //     visited[i][j] = false;
    //     return res;
    // }
    struct TrieNode {
        TrieNode *child[26];
        string str;
    };
    struct Trie {
        TrieNode *root;
        Trie() : root(new TrieNode()) {
        }
        void insert(string s) {
            TrieNode *p = root;
            for (auto &a : s) {
                int i = a - 'a';
                if (!p->child[i]) p->child[i] = new TrieNode();
                p = p->child[i];
            }
            p->str = s;
        }
    };
    vector<string> findWords(vector<vector<char>> &board, vector<string> &words) {
        vector<string> res;
        if (words.empty() || board.empty() || board[0].empty()) return res;
        vector<vector<bool>> visit(board.size(), vector<bool>(board[0].size(), false));
        Trie T;
        for (auto &a : words)
            T.insert(a);
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[i].size(); ++j) {
                if (T.root->child[board[i][j] - 'a']) {
                    search(board, T.root->child[board[i][j] - 'a'], i, j, visit, res);
                }
            }
        }
        return res;
    }
    void search(vector<vector<char>> &board, TrieNode *p, int i, int j, vector<vector<bool>> &visit, vector<string> &res) {
        if (!p->str.empty()) {
            res.push_back(p->str);
            p->str.clear();
        }
        int d[][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        visit[i][j] = true;
        for (auto &a : d) {
            int nx = a[0] + i, ny = a[1] + j;
            if (nx >= 0 && nx < board.size() && ny >= 0 && ny < board[0].size() && !visit[nx][ny] &&
                p->child[board[nx][ny] - 'a']) {
                search(board, p->child[board[nx][ny] - 'a'], nx, ny, visit, res);
            }
        }
        visit[i][j] = false;
    }
};
// @lc code=end
