class Solution {
public:
    string reverseWords(string s) {
        string result = "";
    string tempWord = "";
    s += " ";
    stack<string> Words;
    int len = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
            tempWord += s[i];
        if (s[i] == ' ' && tempWord != "")
        {
            Words.push(tempWord);
            tempWord = "";
        }
    }

    len = Words.size();
    for (int i = 0; i < len - 1; i++, Words.pop())
        result += Words.top() + " ";

    result += Words.top();
    return result;

    }
};