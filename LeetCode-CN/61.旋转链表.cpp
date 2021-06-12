#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=61 lang=cpp
 *
 * [61] 旋转链表
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {
    }
    ListNode(int x) : val(x), next(nullptr) {
    }
    ListNode(int x, ListNode *next) : val(x), next(next) {
    }
};

// @lc code=start

class Solution {
  public:
    ListNode *rotateRight(ListNode *head, int k) {
        if (!head) return nullptr;
        int n = 1;
        ListNode *cur = head, *res;
        while (cur->next) {
            ++n;
            cur = cur->next;
        }
        cur->next = head;
        int m = n - k % n;
        for (int i = 0; i < m; ++i) {
            cur = cur->next;
        }
        res = cur->next;
        cur->next = NULL;
        return res;
    }
};
// @lc code=end
