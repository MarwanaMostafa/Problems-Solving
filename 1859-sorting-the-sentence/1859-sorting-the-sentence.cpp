class Solution {
public:
    string sortSentence(string s) {
           map<int, string> sort;
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            sort.insert({temp[temp.length() - 1] - '0', temp.substr(0, temp.length() - 1)});
            temp = "";
            continue;
        }
        temp += s[i];
    }
    sort.insert({temp[temp.length() - 1] - '0', temp.substr(0, temp.length() - 1)});
    s = "";
    for (auto i : sort)
        s += i.second + " ";
    return s.substr(0, s.length() - 1) ;

  
    }
};