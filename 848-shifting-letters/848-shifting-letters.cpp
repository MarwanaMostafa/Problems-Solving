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
    
        int temp=(s[i] + (sum % 26));
        if (temp > 122)
            s[i] = temp - 26;
        else
            s[i] = temp;
        sum -= shifts[i];
    }
    return s;
    }
};