class Solution {
public:
    bool hasAlternatingBits(int n) {
    int result = -1;
    if(n==1)
        return true;
    for (int i = 0; 0 < n; i++)
    {
        if (n % 2 == 0)
            result =  0;

        else
            result =  1;
        n /= 2;

        if((n%2==0 &&result==0) || (n%2!=0 &&result==1) )
            return false;
    }
    return result; 
    }
};