class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int result=0;
        if(nums.size()==1)
            return nums[0];
        if(nums[0]!=nums[1])
            result+=nums[0];
        for(int i=1;i<nums.size()-1;i++)
            if(nums[i]!=nums[i+1] &&nums[i]!=nums[i-1])
            {
                    result+=nums[i];
            }
        if(nums[nums.size()-2]!=nums[nums.size()-1])
            result+=nums[nums.size()-1];
        return result;
    }
};