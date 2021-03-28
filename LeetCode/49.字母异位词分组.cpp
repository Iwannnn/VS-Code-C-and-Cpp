#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */

// @lc code=start
class Solution {
  public:
    vector<vector<string>> groupAnagrams(vector<string> &strs) {
        vector<vector<string>> res;
        unordered_map<string, int> hash;
        int index = 0;
        for (string str : strs) {
            string temp = str;
            sort(temp.begin(), temp.end());
            if (!hash.count(temp)) {
                hash[temp] = index++;
                res.push_back({});
            }
            res[hash[temp]].push_back(str);
        }
        return res;
    }
};
// @lc code=end
