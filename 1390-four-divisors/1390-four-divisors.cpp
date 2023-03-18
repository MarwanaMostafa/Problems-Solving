class Solution {
public:
 
int getDivisors(int n)
{
  int count =0,result=0;

  for (int i=1; i<=sqrt(n)&&count<5; i++)
  {
    if (n%i == 0)
    {
      if (n/i == i)
      {
        count++;
        result+=i;
      }
      else
      {
        count+=2;
        result+=i+(n/i);
      }
    }
  }

  if(count!=4)
    return 0;
  return result;
}
int sumFourDivisors(vector<int>& nums) {
       int result=0;
       for(int i=0;i<nums.size();i++) 
    result += getDivisors(nums[i]);
       
    return result;
}
};