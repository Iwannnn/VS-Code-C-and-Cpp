#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=147 lang=cpp
 *
 * [147] Insertion Sort List
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
    ListNode *insertionSortList(ListNode *head) {
        ListNode *dummy = new ListNode(-1), *cur = dummy;
        while (head) {
            ListNode *t = head->next;
            cur = dummy;
            while (cur->next && cur->next->val <= head->val) {
                cur = cur->next;
            }
            head->next = cur->next;
            cur->next = head;
            head = t;
        }
        return dummy->next;
    }
};
// @lc code=end
