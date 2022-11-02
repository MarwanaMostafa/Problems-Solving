class Solution {
public:
    int averageValue(vector<int>& nums) {
        int counter=0;
        int summation=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%3==0&&nums[i]%2==0)
            {
                counter++;
                summation+=nums[i];
            }
        }
        return counter!=0?summation/counter:0;
    }
};