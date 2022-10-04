class Solution {
public:
    string removeOccurrences(string s, string part) {
        
    int temp = s.find(part);
    int len = part.length();
    while (temp < s.length())
    {
        s.erase(temp, len);
        temp = s.find(part);
    }

    return s;
    }
};