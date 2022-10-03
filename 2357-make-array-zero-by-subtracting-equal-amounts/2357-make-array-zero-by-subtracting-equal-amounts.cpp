class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
    map<int, int> count;
    for (int i = 0; i < nums.size(); i++)
        count[nums[i]]++;
        
    if (count[0] == 1)
        return count.size() - 1;
    return count.size()-1;
    }
};