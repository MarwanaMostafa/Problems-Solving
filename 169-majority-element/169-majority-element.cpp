class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> temp;
    map<int, int> count;
    for (int i = 0; i < nums.size(); i++)
        temp.insert({nums[i], temp[nums[i]]++});
    for (auto i : temp)
        count.insert({i.second, i.first});

    return count.rbegin()->second;
    }
};