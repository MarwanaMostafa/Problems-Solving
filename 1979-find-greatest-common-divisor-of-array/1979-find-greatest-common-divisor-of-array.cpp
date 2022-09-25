class Solution {
public:
    int findGCD(vector<int>& nums) {
         int Min = INT_MAX;
    int Max = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        if (Min > nums[i])
            Min = nums[i];
        if (Max < nums[i])
            Max = nums[i];
    }
    int result = Min;
    while (result > 0)
    {
        if (Min % result == 0 && Max % result == 0)
            break;
        result--;
    }
    return result;
    }
};