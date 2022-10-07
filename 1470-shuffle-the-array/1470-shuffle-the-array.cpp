class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
  
    
    int counter = 0;
    vector<int> result(2 * n, 0);
    for (int i = 0; i < 2 * n; counter++, i += 2)
    {
        result[i] = nums[counter];
        result[i + 1] = nums[counter + n];
    }
    return result;
    }
        
};