class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        while(nums.size()!=1)
        {
            vector<int>newnums(nums.size()/2,0);
            for(int j=0;j<nums.size()/2;j++)
            {
                if(j%2==0)
                    newnums[j]=min(nums[j*2],nums[2*j+1]);
                else
                    newnums[j]=max(nums[j*2],nums[2*j+1]);
            }
            nums=newnums;
        }
        return nums[0];
    }
};