#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=143 lang=cpp
 *
 * [143] Reorder List
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
    void reorderList(ListNode *head) {
        if (!head || !head->next || !head->next->next) return;
        stack<ListNode *> st;
        ListNode *cur = head;
        int cnt;
        while (cur) {
            st.push(cur);
            cur = cur->next;
        }
        cnt = (int)((st.size() - 1) / 2);
        cur = head;
        while (cnt--) {

            ListNode *s = st.top(), *next = cur->next;
            st.pop();
            cur->next = s;
            s->next = next;
            cur = next;
        }
        st.top()->next = nullptr;
    }
};
// @lc code=end
