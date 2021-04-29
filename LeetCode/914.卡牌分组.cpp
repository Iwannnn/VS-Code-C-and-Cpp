#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
/*
 * @lc app=leetcode.cn id=914 lang=cpp
 *
 * [914] 卡牌分组
 */

// @lc code=start
class Solution {
  public:
    int gcd(int a, int b) {
        if (a < b) return gcd(b, a);
        while (b) {
            int c = a % b;
            a = b;
            b = c;
        }
        return a;
    }
    bool hasGroupsSizeX(vector<int> &deck) {
        sort(deck.begin(), deck.end());
        int n = deck.size(), g = -1;
        for (int i = 0, j; i < n; i++) {
            j = i;
            while (i < n && deck[i] == deck[j])
                i++;
            if (g < 0)
                g = i - j;
            else
                g = gcd(g, i - j);
            if (g == 1) return false;
            i--;
        }
        return g >= 2;
    }
};
// @lc code=end