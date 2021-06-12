#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode.cn id=25 lang=cpp
 *
 * [25] K 个一组翻转链表
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
    ListNode *reverseKGroup(ListNode *head, int k) {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        head = dummy;
        while (head->next != NULL) {
            head = reverseKNode(head, k);
        }
        return dummy->next;
    }
    ListNode *reverseKNode(ListNode *head, int k) {
        ListNode *p = head;
        for (int i = 0; i < k; i++) {
            if (p->next == NULL)
                return p;
            p = p->next;
        }
        ListNode *p1 = head->next;
        ListNode *curt = p1;
        ListNode *next = curt->next;
        for (int i = 0; i < k - 1; i++) {
            if (next == NULL) {
                p1->next = NULL;
                break;
            }
            ListNode *temp = next->next;
            next->next = curt;
            curt = next;
            next = temp;
        }
        head->next = curt;
        p1->next = next;
        return p1;
    }
};
// @lc code=end
