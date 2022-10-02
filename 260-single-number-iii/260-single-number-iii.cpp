class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       
   
    int len = nums.size();
    sort(nums.begin(), nums.end());
    vector<int> result;

    if (nums.size() == 2)
        return nums;
    if (nums[len - 1] != nums[len - 2])
        result.push_back(nums[len - 1]);

    if (nums[0] != nums[1])
        result.push_back(nums[0]);

    for (int i = 1; i < len - 1; i++)
        if (nums[i - 1] != nums[i] && nums[i] != nums[i + 1])
            result.push_back(nums[i]);

    return result;
    }
};