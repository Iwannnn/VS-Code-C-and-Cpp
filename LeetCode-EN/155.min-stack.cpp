#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] Min Stack
 */

// @lc code=start
class MinStack {
  public:
    /** initialize your data structure here. */
    MinStack() {
    }

    void push(int val) {
        s.push(val);
        if (min.empty() || val <= min.top()) {
            min.push(val);
        }
    }

    void pop() {
        if (s.top() == min.top()) min.pop();
        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return min.top();
    }

  private:
    stack<int> s, min;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end
