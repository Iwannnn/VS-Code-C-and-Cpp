#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=45 lang=cpp
 *
 * [45] 跳跃游戏 II
 */

// @lc code=start
class Solution {
  public:
    int jump(vector<int> &nums) {
        /*int res = 666666;
        dfs(nums, res, 0, 0);
        return res;*/
        int res = 0, far = 0, jumpIndex = 0, n = nums.size();
        while (far < n - 1) { //同样次数下能够跳的最远的地方，大于最后一个就好了
            res++;
            int pre = far;
            for (; jumpIndex <= pre; jumpIndex++) {
                far = max(far, jumpIndex + nums[jumpIndex]);
            }
        }
        return res;
    }
    /*void dfs(vector<int> &nums, int &res, int cur, int index) {
        if (index == nums.size() - 1 && cur < res) res = cur;
        for (int i = nums[index]; i >= 1; i--) {
            if (index + i <= nums.size() - 1) dfs(nums, res, cur + 1, index + i);
        }
    }*/
};
// @lc code=end
