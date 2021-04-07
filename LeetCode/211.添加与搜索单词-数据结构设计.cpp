#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=211 lang=cpp
 *
 * [211] 添加与搜索单词 - 数据结构设计
 */

// @lc code=start
class WordDictionary {
  public:
    /** Initialize your data structure here. */
    struct Node {
        Node *son[26];
        bool isEnd;
        Node() {
            isEnd = false;
            for (int i = 0; i < 26; i++) {
                son[i] = NULL;
            }
        }
    } * root;
    WordDictionary() {
        root = new Node();
    }

    void addWord(string word) {
        Node *p = root;
        for (char ch : word) {
            int index = ch - 'a';
            if (!p->son[index]) p->son[index] = new Node();
            p = p->son[index];
        }
        p->isEnd = true;
    }

    bool findWord(Node *p, string &word, int idx) {
        if (idx == word.size()) return p->isEnd;
        if (word[idx] == '.') {
            for (int i = 0; i < 26; i++) {
                if (p->son[i] && findWord(p->son[i], word, idx + 1)) {
                    return true;
                }
            }
        } else {
            int index = word[idx] - 'a';
            if (p->son[index]) return findWord(p->son[index], word, idx + 1);
        }
        return false;
    }
    bool search(string word) {
        return findWord(root, word, 0);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
// @lc code=end
