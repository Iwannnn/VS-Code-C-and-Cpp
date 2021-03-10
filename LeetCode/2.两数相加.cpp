#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x)
        : val(x), next(NULL) {}
};
class Solution {
  public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *ans = new ListNode(0);
        ListNode *temp = ans;
        int sumval = 0;
        int n = 0;
        while (l1 != NULL || l2 != NULL) {
            sumval = 0;
            sumval += l1 != NULL ? l1->val : 0;
            sumval += l2 != NULL ? l2->val : 0;
            if (l1 != NULL) {
                l1 = l1->next;
            }
            if (l2 != NULL) {
                l2 = l2->next;
            }
            if (n == 1)
                sumval++;
            temp->next = new ListNode(sumval % 10);
            temp = temp->next;
            n = sumval >= 10 ? 1 : 0;
        }
        if (n == 1) {
            temp->next = new ListNode(1);
        }
        return ans->next;
    }
};