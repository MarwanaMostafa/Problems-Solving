class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int minVal=INT_MAX;
        int temp=0;
        for(int i=0;i<nums.size();i++)
        {temp=abs(i-start);
            if(nums[i]==target && temp<minVal)
                minVal= temp;
        }return minVal;
    }
};