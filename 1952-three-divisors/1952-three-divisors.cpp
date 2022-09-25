class Solution {
public:
    bool isThree(int n) {
        short result = 2;
    for (int i = 2; result != 4 && i < n; i++)
        if (n % i == 0)
            result++;
    if (result == 3)
        return true;
    return false;
        
    }
};