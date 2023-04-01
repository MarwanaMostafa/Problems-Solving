class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int>result;
        int right=0,left=0;
        for(int i=0;i<nums.size();i++)
            right+=nums[i];            
        for(int i=0;i<nums.size();i++)
        {
            right-=nums[i];
            result.push_back(abs(right-left));
            left+=nums[i];
        }        
    return result;
    
    }
};