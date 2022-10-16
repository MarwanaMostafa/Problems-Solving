class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int result=0;
        int len=nums.size();
        if(len==1)
            return nums[0];
        
        if(nums[0]!=nums[1])
            result+=nums[0];
        
        for(int i=1;i<len-1;i++)
            if(nums[i]!=nums[i+1] &&nums[i]!=nums[i-1])
            {
                    result+=nums[i];
            }
        if(nums[len-2]!=nums[len-1])
            result+=nums[len-1];
        return result;
    }
};