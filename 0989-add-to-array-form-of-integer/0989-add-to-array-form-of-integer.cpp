class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
    vector<int>result;
        int temp=0;
        int len=num.size();
    for(int i=0;k!=0||i<num.size();i++)
    {
        if(i<len)
            temp+=num[len-1-i];
       temp+=k%10;
        k/=10;
        result.push_back(temp%10);
        temp/=10;
        
    }
        if(temp!=0)
                    result.push_back(temp%10);

        reverse(result.begin(),result.end());
        return result;
    }
};