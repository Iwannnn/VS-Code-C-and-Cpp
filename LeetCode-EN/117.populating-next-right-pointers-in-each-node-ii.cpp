#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=117 lang=cpp
 *
 * [117] Populating Next Right Pointers in Each Node II
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
        Node *next = root->next;
        while (next) {
            if (next->left) {
                next = next->left;
                break;
            }
            if (next->right) {
                next = next->right;
                break;
            }
            next = next->next;
        }
        if (root->right) root->right->next = next;
        if (root->left) root->left->next = root->right ? root->right : next;
        connect(root->right);
        connect(root->left);
        return root;
    }
};
// @lc code=end
