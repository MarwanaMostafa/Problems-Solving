class Solution {
public:
    int tribonacci(int n) {
    if(n==0 )
        return 0;
    if(n<2)
        return 1;
    
    int prev0 = 0;
    int prev1 = 1;
    int prev2 = 1;

    for (int i = 3; i <= n; i++) {
        int curr =prev0+ prev1 + prev2;
        prev0 = prev1;
        prev1 = prev2;
        prev2=curr;
    }
    return prev2;  
    }
};