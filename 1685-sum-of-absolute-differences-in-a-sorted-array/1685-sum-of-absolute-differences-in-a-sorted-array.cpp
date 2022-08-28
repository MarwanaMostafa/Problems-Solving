class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
    int sub = 0;
    int sum = 0;
        int len=nums.size() ;
    vector<int> result;
    for (int i = len - 1; i >= 0; i--)
        sum += nums[i];
    for (int i = 0; i < len; i++)
    {
        sum -= nums[i];
        result.push_back(sub + (i * nums[i]) - ((len - i - 1) * nums[i]) + sum);
        sub -= nums[i];
    }
    return result; 
    }
};