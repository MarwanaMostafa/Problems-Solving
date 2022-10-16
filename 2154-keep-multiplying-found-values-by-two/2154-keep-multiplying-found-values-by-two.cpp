class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map<int,int>search;
        for(int i=0;i<nums.size();i++)
            search[nums[i]]=nums[i];
        
        for(int i=0;i<search.size();i++)
        {
            if(search[original]==0)
                return original;
            original=2*search[original];
         }
        return original;
    }
};