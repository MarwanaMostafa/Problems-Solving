class Solution {
public:
    int findGCD(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int result = nums[0];
    while (result > 0)
    {
        if (nums[0] % result == 0 && nums[nums.size()-1] % result == 0)
            break;
        result--;
    }
    return result;
    }
};