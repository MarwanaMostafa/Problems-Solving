class Solution {
public:
    bool isHappy(int n) {
    map<int, int> Isrepeated;
    int temp = 0;
    while (n != 1)
    {
        while (n > 0)
        {
            temp += (n % 10) * (n % 10);
            n /= 10;
        }
        Isrepeated[temp]++;
        if (Isrepeated[temp] > 1)
            return false;
        n = temp;
        temp = 0;
    }
    return true;
    }
};