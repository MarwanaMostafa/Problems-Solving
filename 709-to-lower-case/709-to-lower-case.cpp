class Solution {
public:
    string toLowerCase(string s) {
        int len = s.length();
    for(int i=0; i < len; i++)
        if (s[i] >= 65&& s[i] <= 90)
            s[i] = s[i] + 32;
    return s;
    
    }
};