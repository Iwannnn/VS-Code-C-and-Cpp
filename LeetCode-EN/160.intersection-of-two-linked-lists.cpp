#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) return nullptr;
        ListNode *a = headA, *b = headB;
        while (a != b) {
            a = a ? a->next : headB;
            b = b ? b->next : headA;
        }
        return a;
    }
};
// @lc code=end
