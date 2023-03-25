class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>result;
        for(int i=0;i<nums.size();i++)
        {
            bool flag=true;
            for(int j=i;j<nums.size();j++)
                if(nums[i]<nums[j])
                {
                    result.push_back(nums[j]);
                    flag=false;
                    break;
                }
        if(flag)
            for(int j=0;j<i;j++)
                if(nums[i]<nums[j])
                {
                    result.push_back(nums[j]);
                    flag=false;
                    break;
                }
    
        if(flag)
            result.push_back(-1);
        }
    return result;
    }
};