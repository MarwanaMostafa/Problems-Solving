class Solution {
public:
    int bitwiseComplement(int n) {
         int result = 0;
    if(n==0)
        return 1;
    for (int i = 0; 0 < n; i++)
    {
        if (n % 2 == 0)
            result += pow(2, i) * 1;

        else
            result += pow(2, i) * 0;

        n /= 2;
    }
    return result;
    }
};