class Solution {
public:
    bool detectCapitalUse(string word) {
            int len = word.length();
   int checker = 1;
    if (word[0] >= 65 && word[0] <= 90)
    {
        int i = 1;
        
        for (; i < len; i++)
            if (word[i] >= 97 && word[i] <= 122)
                checker++;
        if (checker == len)
            return true;
        i = 0;
        checker = 0;
        for (; i < len; i++)
            if (word[i] >= 65 && word[i] <= 90)
                checker++;
        if (i == checker)
            return true;
    }
    int i = 0;
    checker = 0;

    for (; i < len; i++)
        if (word[i] <= 122 && word[i] >= 97)
            checker++;
    if (i == checker)
        return true;
    return false;

    }
};