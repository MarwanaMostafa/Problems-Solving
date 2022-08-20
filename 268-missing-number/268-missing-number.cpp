class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int totalSum=(nums.size())*(nums.size()+1) /2;
        for(int i=0;i<nums.size();i++)
            totalSum-=nums[i];
            return totalSum;           
    }
};