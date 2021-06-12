#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=126 lang=cpp
 *
 * [126] 单词接龙 II
 */

// @lc code=start
class Solution {
  public:
    vector<vector<string>> ans;
    deque<string> res;
    unordered_map<string, vector<string>> tree;
    void dfs(string &s, string &fa, string &beginWord) {
        res.push_front(s);
        if (s == beginWord) {
            ans.push_back(vector<string>(res.begin(), res.end()));
            return;
        }
        for (auto ss : tree[s]) {
            if (s != fa) {
                dfs(ss, s, beginWord);
                res.pop_front();
            }
        }
    }
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string> &wordList) {
        map<string, vector<string>> mp;
        wordList.push_back(beginWord);
        set<string> list(wordList.begin(), wordList.end());
        if (list.count(endWord) == 0) return ans;
        queue<string> que;
        que.push(beginWord);
        list.erase(beginWord);
        list.erase(endWord);
        map<string, int> st{{beginWord, 0}};
        int stp = 1;
        bool flag = false;
        while (!que.empty()) {
            int n = que.size();
            for (int i = 0; i < n; i++) {
                string word = que.front();
                que.pop();
                for (int i = 0; i < word.size(); i++) {
                    string w = word;
                    for (int j = 0; j < 26; j++) {
                        w[i] = 'a' + j;
                        if (w == word) continue;
                        if (w == endWord) {
                            tree[w].push_back(word);
                            flag = true;
                        }
                        if (st.count(w) && stp == st[w]) tree[w].push_back(word);
                        if (!list.count(w)) continue;
                        list.erase(w);
                        st[w] = stp;
                        que.push(w);
                        tree[w].push_back(word);
                    }
                }
            }
            if (flag) break;
            stp++;
        }
        string fa;
        dfs(endWord, fa, beginWord);
        return ans;
    }
};
// @lc code=end
