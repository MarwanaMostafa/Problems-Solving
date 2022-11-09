class Solution {
public:
    string reverseWords(string s) {
         int strating = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            reverse(s.begin() + strating, s.begin() + i );
            strating = i + 1;
        }
    }
    reverse(s.begin() + strating, s.end());

    return s;
    }
};