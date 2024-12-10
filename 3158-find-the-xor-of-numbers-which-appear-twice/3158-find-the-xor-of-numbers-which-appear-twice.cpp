class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        vector<int>repeatedNumber;
        
        for(int i=0;i<nums.size()-1;i++)
            if(nums[i]==nums[i+1])
                repeatedNumber.push_back(nums[i]);
        
        int result=0;
        
        if(repeatedNumber.size()==1)
            return repeatedNumber[0];
        
        for(int i=0;i<repeatedNumber.size();i++)
            result^=repeatedNumber[i];
            
        return result;
    }
};