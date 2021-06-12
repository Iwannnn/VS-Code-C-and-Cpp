#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=18 lang=cpp
 *
 * [18] 四数之和
 */

// @lc code=start
class Solution {
  public:
    vector<vector<int>> fourSum(vector<int> &nums, int target) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < (int)nums.size() - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int three_target = target - nums[i];
            for (int j = i + 1; j < (int)nums.size() - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                int two_target = three_target - nums[j];
                int k = j + 1, l = (int)nums.size() - 1;
                while (k < l) {
                    if (nums[k] + nums[l] == two_target) {
                        res.push_back({nums[i], nums[j], nums[k], nums[l]});
                        while (k < l && nums[k] == nums[k + 1])
                            k++;
                        while (k < l && nums[l] == nums[l - 1])
                            l--;
                        k++;
                        l--;
                    } else if (nums[k] + nums[l] > two_target) {
                        l--;
                    } else {
                        k++;
                    }
                }
            }
        }
        return res;
    }
};
// @lc code=end
