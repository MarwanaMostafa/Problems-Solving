class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
   map<int, int> count;
    for (int i = 0; i < nums.size(); i++)
        count[nums[i]]++;

    nums = {};
    for (auto i : count)
        if (i.second > 1)
            nums.push_back(i.first);

    return nums; 
    }
};