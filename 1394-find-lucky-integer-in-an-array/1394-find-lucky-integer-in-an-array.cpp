class Solution {
public:
    int findLucky(vector<int>& arr) {
        
    map<int, int> count;
    int luckyNumber = -1;
    for (int i = 0; i < arr.size(); i++)
        count[arr[i]]++;
    for (auto i : count)
        if (i.first == i.second)
            luckyNumber = i.second;
    return luckyNumber;
    }
};