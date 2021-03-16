#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
  public:
    bool isValid(string s) {
        stack<char> brackets;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                brackets.push(s[i]);
            else {
                if (brackets.empty()) return false;
                if (s[i] == ')' && brackets.top() != '(') return false;
                if (s[i] == ']' && brackets.top() != '[') return false;
                if (s[i] == '}' && brackets.top() != '{') return false;
                brackets.pop();
            }
        }
        return brackets.empty();
    }
};
// @lc code=end
