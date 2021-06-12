#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode()
        : val(0), next(nullptr) {}
    ListNode(int x)
        : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next)
        : val(x), next(next) {}
};

// @lc code=start

class Solution {
  public:
    ListNode *swapPairs(ListNode *head) {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        head = dummy;
        while (head->next != NULL && head->next->next != NULL) {
            ListNode *p1 = head->next, *p2 = head->next->next;
            head->next = p2;
            p1->next = p2->next;
            p2->next = p1;
            head = p1;
        }
        return dummy->next;
    }
};
// @lc code=end
