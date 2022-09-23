class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       map<int, int> count;
    vector<int> result;
    for (int i = 0; i < nums.size(); i++)
        count.insert({nums[i], count[nums[i]]++});

    for (auto i : count)
        if (i.second > 1)
            result.push_back(i.first);

    return result; 
    }
};