class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
       map<int,int>filter;
        vector<int>result;
        for(int i=0;i<nums.size();i++)
            filter[nums[i]]++;
        
        for(int i=0;i<nums.size();i++)
            if(filter[nums[i]]==1&&filter[nums[i]+1]==0&&
              filter[nums[i]-1]==0)
                result.push_back(nums[i]);

        
        
        return result;
    }
};