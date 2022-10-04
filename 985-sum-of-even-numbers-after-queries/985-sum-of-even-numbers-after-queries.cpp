class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
    int evenSummation=0;
    for(int i=0;i<nums.size();i++)
        if(nums[i]%2==0)
            evenSummation+=nums[i];
   
    vector<int> result;
    int val = 0;
    int index = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        val=queries[i][0];
        index=queries[i][1];
        if(nums[index]%2==0)
            evenSummation-=nums[index];
        nums[index]+=val;
        if(nums[index]%2==0)
            evenSummation+=nums[index];
        result.push_back(evenSummation);
        
    }
    return result; 
    }
};