class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> countchar;
    for (int i = 0; i < s.length(); i++)
        countchar.insert({s[i], countchar[s[i]]++});

    for (int i = 0; i < s.length(); i++)
        if (countchar[s[i]] == 1)
            return i;
    return -1;
    }
};