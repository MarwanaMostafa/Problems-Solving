class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
          int n = arr.size(), answer = 0;

        
        for (int currentSum = 0,left = 0; left < n;currentSum = 0, ++left) 
            for (int right = left; right < n; ++right) {
                currentSum += arr[right];
                answer += (right - left + 1) % 2 == 1 ? currentSum : 0;
            }
        
        return answer;
    
    }
};