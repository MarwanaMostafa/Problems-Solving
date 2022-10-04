class Solution {
public:
    int countEven(int num) {
    
    int sumDigits = 0;
    int temp = 0;
    int result = 0;
    for (int i = 1; i <= num; i++)
    {
        temp = i;
        while (temp > 0)
        {
            sumDigits += temp % 10;
            temp /= 10;
        }
        if (sumDigits % 2 == 0)
            result++;
        sumDigits = 0;
    }
    return result;
    }
};