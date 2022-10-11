class Solution {
public:
    bool checkZeroOnes(string s) {
         int counter = 0;
    int resultOnes = 0;
    int resultZeros = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            counter++;
        else
        {
            if (counter != 0 &&counter>resultOnes)
                    resultOnes = counter;
            counter = 0;
        }
    }
        if(counter>resultOnes)
            resultOnes=counter;
    counter=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
            counter++;
        else
        {
            if (counter != 0 &&counter>resultZeros)
                    resultZeros = counter;
            counter = 0;
        }
    }
        
        if(counter>resultZeros)
            resultZeros=counter;
    if(resultZeros<resultOnes)
                return true;
    return false;
        
    
    }
};
