class Solution {
public:
    int maxPower(string s) {
    int counter = 0;
    int result = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i+1])
            counter++;
        else
        {
            if (counter != 0 &&counter>result)
                    result = counter;
            counter = 0;
        }
    }
    if (counter > result)
       return counter+1;
    return result+1;
    }
};