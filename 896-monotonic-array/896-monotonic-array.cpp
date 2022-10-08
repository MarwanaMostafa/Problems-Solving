class Solution {
public:
    bool isMonotonic(vector<int>& nums) {

        
   
    bool flag1 = false;
    bool flag2 = false;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] >= nums[i - 1])
            continue;
        else
        {
            flag1 = true;
            break;
        }
    }
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] <= nums[i - 1])
            continue;
        else
        {
            flag2 = true;
            break;
        }
    }
    if (flag1 && flag2)

        return false;
        return true;
        
    }
};