#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode *res_head, *res, *p = l1, *q = l2;
        if (p == NULL && q == NULL)
            return NULL;
        else if (p == NULL && q != NULL)
            return q;
        else if (p != NULL && q == NULL)
            return p;
        if (p->val <= q->val) {
            res = p;
            p = p->next;
        } else {
            res = q;
            q = q->next;
        }
        res_head = res;
        while (p && q) {
            if (p->val <= q->val) {
                res->next = p;
                p = p->next;
            } else {
                res->next = q;
                q = q->next;
            }
            res = res->next;
        }
        if (p != NULL) {
            res->next = p;
        }
        if (q != NULL) {
            res->next = q;
        }
        return res_head;
    }
};
// @lc code=end
