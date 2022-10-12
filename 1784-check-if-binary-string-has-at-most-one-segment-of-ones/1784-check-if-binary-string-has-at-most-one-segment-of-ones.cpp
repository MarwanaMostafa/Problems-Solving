class Solution {
public:
    bool checkOnesSegment(string s) {
       int firstOccurrence1 = s.find('1');

    if (firstOccurrence1 == string::npos)
        return false;

    int i = firstOccurrence1;

    for (; i < s.length(); i++)
        if (s[i] == '0')
            break;

    for (; i < s.length(); i++)
        if (s[i] == '1')
            return false;

    return true;

    }
};

