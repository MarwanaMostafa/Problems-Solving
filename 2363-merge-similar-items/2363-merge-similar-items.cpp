class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
            vector<vector<int>> result;
    map<int, int> item1;
    for (int i = 0; i < items1.size(); i++)
        item1[items1[i][0]] += items1[i][1];

    for (int i = 0; i < items2.size(); i++)
        item1[items2[i][0]] += items2[i][1];

    for (auto i : item1)
        result.push_back({i.first,i.second});

    return result;

    }
};