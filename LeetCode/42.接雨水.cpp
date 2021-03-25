#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode.cn id=42 lang=cpp
 *
 * [42] 接雨水
 */

// @lc code=start
class Solution {
  public:
    int dp(vector<int> &height) {
        vector<int> dp(height.size(), 0);
        int res = 0, t = 0;
        for (int i = 0; i < height.size(); i++) {
            dp[i] = t;
            t = max(t, height[i]); //从左往又看最高
        }
        t = 0;
        for (int i = height.size() - 1; i >= 0; i--) {
            dp[i] = min(t, dp[i]); //两边的高去小的就是这一个位置能存水的量
            t = max(t, height[i]); //从右往左看最高
            if (dp[i] > height[i]) {
                res += dp[i] - height[i];
            }
        }
        return res;
    }
    int sta(vector<int> &height) {
        stack<int> st;
        int i = 0, res = 0;
        while (i < height.size()) {
            if (st.empty() || height[i] <= height[st.top()]) {
                st.push(i++);
            } else {
                int t = st.top();
                st.pop();
                if (st.empty()) continue;
                res += (min(height[i], height[st.top()] - height[t]) * (i - st.top() - 1));
            }
        }
        return res;
    }
};
// @lc code=end
