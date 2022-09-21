class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
         map<string, int> count;
    vector<string> result;

    for (int i = 0; i < words.size(); i++)
        count.insert({words[i], count[words[i]]++});

    int counter = 0;
    string max = "";
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