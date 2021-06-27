#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] Linked List Cycle II
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {
    }
};
// @lc code=start

class Solution {
  public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) break;
        }
        if (!fast || !fast->next) return NULL;
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        return fast;
    }
};
// @lc code=end
