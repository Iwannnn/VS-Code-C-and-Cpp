#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=338 lang=cpp
 *
 * [338] 比特位计数
 */

// @lc code=start
class Solution {
  public:
    vector<int> countBits(int num) {
        vector<int> res(num + 1, 0);
        for (int i = 1; i <= num; i++) {
            res[i] = res[i & (i - 1)] + 1;
            /*
             * 与前一位相与 结果全为0则屎2的n次方
             * 因为 i和i-1之间只有最后一位的＋1导致的变化 相与后能表示+1后发生了什么变化
             * 如果+1 会导致变化 那么只会变成0
             * 所以与后用变化的结果所含的1的个数+1就是他的答案了
             */
        }
        return res;
    }
};
// @lc code=end
