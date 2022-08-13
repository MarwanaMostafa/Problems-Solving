class Solution {
public:
     int countDigitOne(int n) {
 
      string temp = to_string(n);
    int numberOfOnes = 0;
    while (temp.length() >6)
    {

        numberOfOnes += ((temp.length() - 1) * pow(10, temp.length() - 2) * ((int)temp[0] - '0')) + 1;
if (temp[1] != '0')
            numberOfOnes += pow(10, temp.length() - 1) - 1;
        
        
        n -= pow(10, temp.length() - 1) * ((int)temp[0] - '0');
        temp = to_string(n);
    }

    for (int i = 0; i <= n; i++)
    {
        temp = to_string(i);
        for (int j = 0; j <= temp.length(); j++)
            if (temp[j] == '1')
                numberOfOnes++;
    }
    return numberOfOnes;

        
    }
};