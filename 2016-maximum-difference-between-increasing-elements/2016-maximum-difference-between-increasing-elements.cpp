class Solution {
public:
    int maximumDifference(vector<int>& nums) {
       
   int lsf = INT_MAX;
        int op = 0;
        int pist = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < lsf)
                lsf = nums[i];
                
            pist = nums[i] - lsf;
            if(op < pist)
                op = pist;
            
        }
        if(op==0)
            return -1;
        return op;
    }
};