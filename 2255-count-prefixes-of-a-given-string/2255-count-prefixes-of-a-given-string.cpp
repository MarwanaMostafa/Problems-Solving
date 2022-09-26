class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        temp += s[i];
        for (int ii = 0; ii < words.size(); ii++)
            if (words[ii] == temp)
                count++;
    }
    return count;
    }
};