#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=92 lang=cpp
 *
 * [92] Reverse Linked List II
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
    ListNode *reverseBetween(ListNode *head, int left, int right) {
        ListNode *dummy = new ListNode(-1), *pre = dummy, *cur;
        dummy->next = head;
        for (int i = 0; i < left - 1; ++i) {
            pre = pre->next;
        }
        cur = pre->next;
        for (int i = left; i < right; ++i) {
            ListNode *t = cur->next;
            cur->next = t->next;
            t->next = pre->next;
            pre->next = t;
        }
        return dummy->next;
    }
};
// @lc code=end
