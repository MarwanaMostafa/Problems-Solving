class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    int len = nums.size();
    int idx;
    for(int i = 0 ; i < len ; i++)
    {
        idx = abs(nums[i]) - 1;
        if(nums[idx] > 0)
            nums[idx] *= -1;
    }
    vector <int> result;
    for(int i = 0 ; i < len ; i++)
        if(nums[i] > 0)
            result.emplace_back(i + 1);
    return result;  
    }
};