class Solution {
public:
    int totalMoney(int n) {
        int result=0;
        int remainder=n%7;
        if(n<7)
        {   for(int i=1;i<=n;i++)
                result+=i;
        return result;
        }
        for(int i=0;i<n-remainder;i+=7)
            result+=28+i;
        cout<<"ENTER"<<result<<endl;
        for(int i=(n/7)+1;i<(n/7)+1+remainder;i++)
            result+=i;
            
        return result;
    }
};