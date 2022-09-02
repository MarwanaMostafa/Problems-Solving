class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       int len = nums.size();
     if (len < 2)
            return 0;
      
        if (nums[0] > nums[1])
        return 0;
    for (int i = 1; i < len-1; i++)
    {

        if (nums[i] > nums[i - 1] && nums[i] < nums[i + 1])
            i++;
        if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
            return i;
    }
    return len - 1;
    
    }
};