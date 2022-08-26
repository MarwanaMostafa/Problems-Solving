class Solution {
public:
    bool IsEven(int n)
{
    int conuter = 0;
    while(n > 0)
    {
        n /= 10;
        conuter++;
    }
    if(conuter%2==0)
            return true;    
    return false;
}
    int findNumbers(vector<int>& nums) {
        
    int result = 0;
    for(int &i : nums)
        if(IsEven(i))
            result++;
    return result;

    }
};