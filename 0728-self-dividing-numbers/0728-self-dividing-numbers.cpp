class Solution {
public:
    bool isSelfDividingNumber(int number){
    int remainder,temp=number;
    while(temp!=0)
    {
        remainder=temp%10;
        if(remainder==0 || number%remainder!=0)
            return false;
        temp=temp/10;
    }
    return true;
}
vector<int> selfDividingNumbers(int left, int right) {
    std::vector<int>result;
    for(;left<=right;left++)
        if(isSelfDividingNumber(left))
            result.push_back(left);

    return result;
}

};