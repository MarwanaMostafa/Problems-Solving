class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> count;
    int result = -1;

    for (int i = 0; i < nums.size(); i++)
        if (nums[i] % 2 == 0)
            count.insert({nums[i], count[nums[i]]++});

    for (map<int, int>::iterator itr = count.begin(); itr != count.end(); ++itr)
        if (itr->second > count[result])
            result = itr->first;
    return result;
    }
};