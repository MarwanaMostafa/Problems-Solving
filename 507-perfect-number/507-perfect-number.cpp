class Solution {
public:
    bool checkPerfectNumber(int num) {
         int result = -num;
    if (num % 2 != 0)
        return false;
    for (int i = 1; i <= sqrt(num); i++)
        if (num % i == 0)
        {
            if (num / i == i)
                result += i;
            else
                result += i + num / i;
        }
    if (result == num)
        return true;
    return false;
    }
};