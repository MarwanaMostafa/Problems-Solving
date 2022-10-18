class Solution {
public:
    vector<long long> sumOfThree(long long num) {
    if(num%3!=0)
    return {};
    long long result=num/3;
    return {result-1,result,result+1};
    }
};