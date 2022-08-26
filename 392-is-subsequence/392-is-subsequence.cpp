class Solution {
public:
    bool isSubsequence(string s, string t) {
      int j = 0;
    int i = 0;
    if (s.length() == 0)
        return true;
    if (t.length() == 0)
        return false;

   for (; i < s.length() && j < t.length() ;)
    {
        for (; j < t.length(); j++)
        {

            if (s[i] == t[j])
            {
                i++;
                j++;
                break;
            }
        }
    }


    if (i != s.length())
        return false;
    return true;
    }
};