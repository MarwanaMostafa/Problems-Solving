class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
    map<int, int> count;
    for (int i = 0; i < nums.size(); i++)
        count[nums[i]]++;
    int counter = 0;
    for (auto i : count)
        counter += (i.second) * (i.second - 1) / 2;
    return counter;
    }
};