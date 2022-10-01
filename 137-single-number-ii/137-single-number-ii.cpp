class Solution {
public:
    int singleNumber(vector<int>& nums) {
    
    int len = nums.size();
    sort(nums.begin(), nums.end());
    
    if(nums.size()==1)
        return nums[0];
    if (nums[len - 1] != nums[len - 2])
        return nums[len - 1];

    for (int i = 1; i < len - 1; i += 3)
    {
        if (nums[i - 1] != nums[i] && nums[i] == nums[i + 1])
            return nums[i - 1];
        if (nums[i - 1] != nums[i] && nums[i] != nums[i + 1])
            return nums[i];
    }

    return -1;
    }
};