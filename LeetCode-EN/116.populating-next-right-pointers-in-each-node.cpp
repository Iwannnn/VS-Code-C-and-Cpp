#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=116 lang=cpp
 *
 * [116] Populating Next Right Pointers in Each Node
 */
class Node {
  public:
    int val;
    Node *left;
    Node *right;
    Node *next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {
    }

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {
    }

    Node(int _val, Node *_left, Node *_right, Node *_next) : val(_val), left(_left), right(_right), next(_next) {
    }
};
// @lc code=start

class Solution {
  public:
    Node *connect(Node *root) {
        if (!root) return nullptr;
        if (root->left) root->left->next = root->right;
        if (root->right) root->right->next = root->next ? root->next->left : nullptr;
        connect(root->left);
        connect(root->right);
        return root;
    }
};
// @lc code=end
