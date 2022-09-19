class Solution {
public:
   bool IsPalindrome(string s)
{

    string reverseS = s;
    reverse(reverseS.begin(), reverseS.end());
    if (s == reverseS)
        return true;
    return false;
}

int countSubstrings(string s)
{
    
    int counterPalindrome = 0;
    for (int i = 0; i < s.length(); i++)
        for (int j = i, counter = 1; j < s.length(); j++, counter++)
            if (IsPalindrome(s.substr(i, counter)))
                counterPalindrome++;

    return counterPalindrome;
}
};