class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

    do
    {
        result.push_back(nums);
    } while (next_permutation(nums.begin(), nums.begin()+nums.size()));
    return result;
    }
};