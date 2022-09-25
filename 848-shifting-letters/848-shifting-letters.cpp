class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
    int sum = 0;
    for (int i = 0; i < shifts.size(); i++)
    {   
        if(shifts[i]>26)
            shifts[i]%=26;
        sum += shifts[i];
    }
    for (int i = 0; i < shifts.size(); i++)
    {
        if ((s[i] + (sum % 26)) > 122)
            s[i] = (s[i] + (sum % 26)) - 26;
        else
            s[i] = (s[i] + (sum % 26));
        sum -= shifts[i];
    }
    return s;
    }
};