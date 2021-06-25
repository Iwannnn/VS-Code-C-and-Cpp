#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=141 lang=cpp
 *
 * [141] Linked List Cycle
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
    bool hasCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) return true;
        }
        return false;
    }
};
// @lc code=end
