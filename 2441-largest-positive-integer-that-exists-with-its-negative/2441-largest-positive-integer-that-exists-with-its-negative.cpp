class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map<int,int>numbers;
        for(int i=0;i<nums.size();i++)
            numbers[nums[i]]++;
    for (auto i = numbers.rbegin(); i != numbers.rend(); ++i) 
    {   
        if(numbers[-1*i->first]>0&&numbers[i->first]>0)
            return i->first;
    }  
    return -1;
    }
};