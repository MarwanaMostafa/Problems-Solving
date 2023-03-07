class Solution {
public:
  int getIndex(std::vector<int>& nums,int number)
{
    int mid;
    int low = 0;
    int high = nums.size();
    while (low < high) {
        mid = low + (high - low) / 2;
        if (number <= nums[mid])
            high = mid;
        else
            low = mid + 1;
    }
    
    return low;

}
int maximumCount(std::vector<int>& nums) {
    int firstIndexPositive=(getIndex(nums,1));
   
    int firstIndexZero=(getIndex(nums,0));
   
    int numOfPositive=nums.size()-firstIndexPositive;
   
    int numOfNegative=firstIndexZero;
   
    return std::max(numOfNegative,numOfPositive);




}

};