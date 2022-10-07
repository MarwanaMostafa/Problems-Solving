class Solution {
public:
    int findComplement(int num) {
    int result = 0;
    for (int i = 0; 0 < num; i++)
    {
        if (num % 2 == 0)
            result += pow(2, i) * 1;

        else
            result += pow(2, i) * 0;

        num /= 2;
    }
    return result;
    }
};