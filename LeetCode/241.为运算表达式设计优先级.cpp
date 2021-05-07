#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=241 lang=cpp
 *
 * [241] 为运算表达式设计优先级
 */

// @lc code=start
class Solution {
  public:
    unordered_map<string, vector<int>> exphash;
    vector<int> diffWaysToCompute(string expression) {
        if (exphash.count(expression)) return exphash[expression];
        vector<int> res;
        for (int i = 0; i < expression.size(); ++i) {
            if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*') {
                vector<int> left = diffWaysToCompute(expression.substr(0, i));
                vector<int> right = diffWaysToCompute(expression.substr(i + 1));
                for (int j = 0; j < left.size(); ++j) {
                    for (int k = 0; k < right.size(); ++k) {
                        if (expression[i] == '+')
                            res.push_back(left[j] + right[k]);
                        else if (expression[i] == '-')
                            res.push_back(left[j] - right[k]);
                        else
                            res.push_back(left[j] * right[k]);
                    }
                }
            }
        }
        if (res.empty()) res.push_back(stoi(expression));
        exphash[expression] = res;
        return res;
    }
};
// @lc code=end
