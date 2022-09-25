class Solution {
public:
    bool areOccurrencesEqual(string s) {
       map<char, int> count;
    for (int i = 0; i < s.length(); i++)
        count[s[i]]++;

    for (auto i = count.begin(); i != count.end(); ++i)
        if (count[s[0]] != i->second)
            return false;
    return true;

    }
};