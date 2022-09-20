class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
            map<int, int> temp;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++)
            temp.insert({nums[i], temp[nums[i]]++});
        for (auto i : temp)
            if (i.second > nums.size() / 3)
                result.push_back(i.first);

        return result;
    }
};