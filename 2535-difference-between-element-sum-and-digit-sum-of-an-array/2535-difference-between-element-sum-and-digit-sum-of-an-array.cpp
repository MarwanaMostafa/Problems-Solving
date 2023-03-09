class Solution {
public:
   int sumDigits(int num){
    int result=0;
    while(num!=0)
    {
        result+=num%10;
        num/=10;
    }
    return result;
}
int differenceOfSum(std::vector<int>& nums) {
    int summationsElements=0,summationDigits=0;
    for(int i:nums) {
        summationsElements += i;
        summationDigits+= sumDigits(i);
    }
    return abs((summationDigits-summationsElements));
}

};