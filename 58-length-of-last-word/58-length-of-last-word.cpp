class Solution {
public:
    int lengthOfLastWord(string s) {
            int counter = 0;
    s += ' ';
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == ' ' && s[i + 1] != ' ')
            counter = 0;
        else if(s[i]!=' ')
            counter++;
    }
    return counter;

    }
};