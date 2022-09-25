class Solution {
public:
    int percentageLetter(string s, char letter) {
        int result = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == letter)
            result++;
    return (result * 100/ s.length());
    }
};