class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
      int result = INT_MAX;
    int result2 = 0;
    int temp = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        temp = abs(nums[i] - 0);
        if (temp < result)
        {
            result = temp;
            result2 = nums[i];
        }
        else if (temp == result)
        {
            if (nums[i] > nums[i - 1])
            {
                result = nums[i];
                result2 = nums[i];
            }
        }
    }
    return result2;
    }
};