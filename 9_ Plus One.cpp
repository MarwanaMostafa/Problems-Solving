//Problem Description: https://leetcode.com/problems/plus-one/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     
  
    if (digits.back() != 9)
    {
        digits.back() = digits.back() + 1;
        return digits;
    }

    for (int i = digits.size() - 1; i >= 0; i--)
    {
        digits.at(i) = 0;
        if (i != 0 && digits.at(i - 1) != 9)
        {
            digits.at(i - 1)++;
            return digits;
        }
    }
    if (digits.at(0) == 0)
    {
        digits.push_back(0);
        digits.at(0) = 1;
    }
    return digits;
    
    
    
    
    }
};
