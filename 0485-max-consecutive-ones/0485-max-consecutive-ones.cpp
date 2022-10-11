class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
    int counter = 0;
    int result = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
            counter++;
        else
        {
            if (counter != 0)
                if (counter > result)
                    result = counter;
            counter = 0;
        }
    }
         if (counter > result)
                    result = counter;
    return result;
    }
};