class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if(nums.size()==0)
           return 0; 
        sort(nums.begin(),nums.end());
        int counter=1;int result=1;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1]){
            if(nums[i]-1==nums[i-1])
                counter++;
            else{
                result=max(result,counter);
                counter=1;
            }}
        }
        result=max(result,counter);
        return result;
    }
};