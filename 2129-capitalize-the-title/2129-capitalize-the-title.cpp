class Solution {
public:
    string convertWord(string word)
{
    if (word.length() <= 3)
    {
        for (int i = 0; i < word.length(); i++)
            if (word[i] >= 65 && word[i] <= 90)
                word[i] = word[i] + 32;
        return word;
    }

    if (word[0] <= 122 && word[0] >= 97)
        word[0] = word[0] - 32;
    for (int i = 1; i < word.length(); i++)
        if (word[i] >= 65 && word[i] <= 90)
            word[i] = word[i] + 32;
    return word;
}

    string capitalizeTitle(string title) {
    int len = title.length();
    string result = "";
    for (int i = 0; i < len; i++)
        if (title[i] == ' ')
            result += convertWord(title.substr(result.length(), i + 1 - result.length()));
    result += convertWord(title.substr(result.length(), len) + " ");
    result = result.substr(0, len);

    return result;
 
    }
};