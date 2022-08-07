//Problem Description :  https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> result;
    int size = nums.size();

    if (size == 0)
    {
        result.push_back(-1);
        result.push_back(-1);
        return result;
    }
    if (size == 1)
    {
        if (target == nums.at(0))
        {
            result.push_back(0);
            result.push_back(0);

            return result;
        }
        result.push_back(-1);
        result.push_back(-1);
        return result;
    }

    int left = 0;
    int right = nums.size() - 1;
    int firstPosition = -1;
    int lastPosition = -1;
    while (left <= right)
    {
        int middle = left + (right - left) / 2;
        if (nums[middle] == target)
        {
            firstPosition = middle;
            right = middle - 1;
        }
        else if (target < nums[middle])
            right = middle - 1;
        else
            left = middle + 1;
    }
    left = 0;
    right = nums.size() - 1;

    while (left <= right)
    {
        int middle = left + (right - left) / 2;
        if (nums[middle] == target)
        {
            lastPosition = middle;
            left = middle + 1;
        }
        else if (target < nums[middle])
            right = middle - 1;
        else
            left = middle + 1;
    }
    result.push_back(firstPosition);
    result.push_back(lastPosition);
    return result;
}};
