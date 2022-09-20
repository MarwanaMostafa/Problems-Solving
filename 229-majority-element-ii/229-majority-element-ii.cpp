class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      
    unordered_map <int, int> count;
    vector<int> result;

    for (int i = 0; i < nums.size(); i++)
        count.insert({nums[i], count[nums[i]]++});
    for (unordered_map <int, int>::iterator itr = count.begin(); itr != count.end(); ++itr)
        if (itr->second > nums.size() / 3)
            result.push_back(itr->first);

    return result;
    }
};