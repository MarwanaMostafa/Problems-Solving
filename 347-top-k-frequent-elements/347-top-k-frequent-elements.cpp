class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int, int> count;
    vector<int> result;

    for (int i = 0; i < nums.size(); i++)
        count.insert({nums[i], count[nums[i]]++});


    int counter = 0;
    int max = 0;
    int temp = 0;
    for (auto itr = count.begin(); counter < k && itr != count.end(); ++itr, counter++)
    {
        for (auto itr2 = count.begin(); itr2 != count.end(); ++itr2)
        {
            if (itr2->second > temp)
            {
                temp = itr2->second;
                max = itr2->first;
            }
        }
        result.push_back(max);
        count[max] = 0;
        temp = 0;
    }
    return result;

    }
};