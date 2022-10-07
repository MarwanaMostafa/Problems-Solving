class Solution {
public:
    int findComplement(int num) {
    vector<int> tempResult;
    int result = 0;
    for (int i = 0; 0 < num; i++)
    {
        if (num % 2 == 0)
            tempResult.push_back(1);
        else
            tempResult.push_back(0);
        num /= 2;
        result += pow(2, i) * tempResult[i];
    }
    return result;
    }
};