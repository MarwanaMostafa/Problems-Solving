class Solution {
public:
    char repeatedCharacter(string s) {
            map<char, int> countchar;
    for (int i = 0; i < s.length(); i++)
    {        
        countchar.insert({s[i], countchar[s[i]]++});
        if (countchar[s[i]] == 2)
            return s[i];
    }
     return ' ';

    }
};