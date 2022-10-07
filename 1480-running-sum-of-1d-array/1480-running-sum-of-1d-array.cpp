class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
    int summation=0;
    for(int i=0;i<nums.size();i++)
    {
        summation+=nums[i];
        nums[i]=summation;
    }
    return nums;
    }
};