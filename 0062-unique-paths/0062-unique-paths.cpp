class Solution {
public:
    int uniquePaths(int m, int n) {
        int totalSteps = m + n - 2;
        
        int downSteps = m - 1;
        int rightSteps = n - 1;
        
        long long uniquePaths = 1;
        for (int i = 1; i <= downSteps; ++i) {
            uniquePaths *= (totalSteps - downSteps + i);
            uniquePaths /= i;
        }
        
        return uniquePaths;
    }
};
