class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
     
     map<int, int> count;
    map<int, int> count2;
    for (int i = 0; i < arr.size(); i++)
        count[arr[i]]++;

    for (auto i : count) // same occurrences will overlapping so size for two map will be different ,this mean there is more vairable has same occurence
        count2.insert({i.second, i.first});

    if (count2.size() != count.size())
        return false;
    return true;
    }
};