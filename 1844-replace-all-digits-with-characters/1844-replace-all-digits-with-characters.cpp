class Solution {
public:
    string replaceDigits(string s) {
        for (int i = 0; i < s.length(); i++)
        if (s[i] > 47 && s[i] < 58)
            s[i] = s[i - 1] + (s[i] - '0');
    return s;
    }
};