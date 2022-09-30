class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
         vector<int> result;
    vector<int> countC;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == c)
            countC.push_back(i);
    int j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (j > 0)
            result.push_back(min(abs(countC[j - 1] - i), abs(countC[j] - i)));
        else
            result.push_back(abs(countC[j] - i));

        if (i == countC[j] &&j+1<countC.size())
            j++;
    }
  
    return result;
    }
};