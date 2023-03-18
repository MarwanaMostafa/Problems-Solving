class Solution {
public:
 
int sumFourDivisors(vector<int>& nums) {
       int finalResult,count,result=0;
       for(int i=0;i<nums.size();i++){
            for (int j=1; j<=sqrt(nums[i])&&count<5; j++)
            {
    if (nums[i]%j == 0)
    {
      if (nums[i]/j == j)
      {
        count++;
        result+=j;
      }
      else
      {
        count+=2;
        result+=j+nums[i]/j;
      }
    }
  }
       
             if(count==4)
                 finalResult+=result;
             count =0,result=0;
       
       
       }
      return finalResult;
}
};