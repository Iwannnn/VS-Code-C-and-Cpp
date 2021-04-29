#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=912 lang=cpp
 *
 * [912] 排序数组
 */

// @lc code=start
class Solution {
  public:
    vector<int> sortArray(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        return nums;
        // int n = nums.size();
        // return nums;
    }

    void ChangeSort(vector<int> &nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            int mini = i;
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] < nums[mini]) {
                    mini = j;
                }
            }
            swap(nums[mini], nums[i]);
        }
    }

    void InsertSort(vector<int> &nums) {
        for (int i = 1; i < nums.size(); i++) {
            int temp = nums[i];
            int j = i;
            while (j > 0 && nums[j - 1] > temp) {
                nums[j] = nums[j - 1];
                j--;
            }
            nums[j] = temp;
        }
    }

    void QuickSort(vector<int> &nums, int start, int end) {
        if (start >= end) return;
        int temp = nums[start];
        int left = start, right = end;
        while (left < right) {
            while (left < right && nums[right] > temp)
                right--;
            if (left < right) nums[left++] = nums[right]; //第一个小的放到左边
            while (left < right && temp > nums[left])
                left++;
            if (left < right) nums[right--] = nums[left]; //第一个大的放到右边
        }
        nums[left] = temp;
        QuickSort(nums, start, left - 1);
        QuickSort(nums, left + 1, end);
    }

    void MergeSort(vector<int> &nums, int first, int last, vector<int> &temps) {
        if (first < last) {
            int mid = (first + last) / 2;
            MergeSort(nums, first, mid, temps);
            MergeSort(nums, mid + 1, last, temps);
            Merge(nums, first, mid, last, temps);
        }
    }

    void Merge(vector<int> &nums, int first, int mid, int last, vector<int> &temps) {
        int i = first, j = mid + 1; // start
        int m = mid, n = last;      // end
        int k = 0;
        while (i <= m && j <= n) {
            if (nums[i] < nums[j])
                temps[k++] = nums[i++];
            else
                temps[k++] = nums[j++];
        }
        while (i < m)
            temps[k++] = nums[i++];
        while (j < n)
            temps[k++] = nums[j++];
    }
};

//@lc code = end