class Solution {
public:
    vector<int> sumZero(int n) {
       vector<int> result;
    if (n % 2 != 0)
        result.push_back(0);
    for (int i = 1; i < n; i = i + 2)
    {
        result.push_back(i);
        result.push_back(-1 * i);
    }
    return result; 
    }
};