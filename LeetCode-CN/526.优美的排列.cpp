#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=526 lang=cpp
 *
 * [526] 优美的排列
 */

// @lc code=start
class Solution {
  public:
    int countArrangement(int n) {
        vector<int> nums(n);
        for (int i = 0; i < n; ++i)
            nums[i] = i + 1;
        return helper(n, nums);
    }
    /*%void dfs(int n, int idx, vector<bool> &visited, int &res) {
        if (idx > n) {
            res++;
            return;
        }
        for (int i = 1; i <= n; i++) {
            if (visited[i] == false && (i % idx == 0 || idx % i == 0)) {
                visited[i] = true;
                dfs(n, idx + 1, visited, res);
                visited[i] = false;
            }
        }
    }*/
    int helper(int n, vector<int> nums) {
        if (n <= 0) return 1;
        int res = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] % n == 0 || n % nums[i] == 0) {
                swap(nums[i], nums[n - 1]);
                res += helper(n - 1, nums);
                swap(nums[i], nums[n - 1]);
            }
        }
        return res;
    }
};
// @lc code=end
