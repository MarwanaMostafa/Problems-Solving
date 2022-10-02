class Solution {
public:
    string makeGood(string s) {
    for (int i = 0; s.length() != 0 && i < s.length() - 1; i++)
    {
        if (s[i] + 0 == s[i + 1] + 32||s[i] + 32 == s[i + 1] + 0 )
        {
            s.erase(s.begin() + i);
            s.erase(s.begin() + i);
            i = -1;
        }
    }
    return s;
    }
};