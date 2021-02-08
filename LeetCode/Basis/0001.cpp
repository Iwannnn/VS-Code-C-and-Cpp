#include <vector>
#include <map>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash;
        vector<int> result(2, -1);
        for (int i = 0; i < nums.size();i++){
            if (hash.count(target-nums[i])>0){
                result[0] = hash[target-nums[i]];
                result[1] = i;
            }
            hash[nums[i]] = i;
        }
        return result;
    }
};