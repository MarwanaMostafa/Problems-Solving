class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len =nums.size();
        int totalSum=(len)*(len+1) /2;
        
        for(int i=0;i<len;i++)
            totalSum-=nums[i];
        return totalSum;           
    
    }
};