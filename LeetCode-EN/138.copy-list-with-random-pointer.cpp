#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=138 lang=cpp
 *
 * [138] Copy List with Random Pointer
 */
class Node {
  public:
    int val;
    Node *next;
    Node *random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
// @lc code=start

class Solution {
  public:
    Node *copyRandomList(Node *head) {
        unordered_map<Node *, Node *> m;
        return helper(head, m);
    }
    Node *helper(Node *node, unordered_map<Node *, Node *> &m) {
        if (!node) return nullptr;
        if (m.count(node)) return m[node];
        Node *res = new Node(node->val);
        m[node] = res;
        res->next = helper(node->next, m);
        res->random = helper(node->random, m);
        return res;
    }
};
// @lc code=end
