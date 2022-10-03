class Solution {
public:
    int smallestEqual(vector<int>& nums) {
            int result = INT_MAX;
    for (int i = 0; i < nums.size(); i++)
        if (i % 10 == nums[i] && i < result)
            result = i;
    if(result==INT_MAX)
        return -1;
    return result;

    }
};