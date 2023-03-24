class Solution {
public:
    bool isHappy(int n) {
        if(n==1)
            return true;        
        int result;
        while(n!=1 &&n!=4)
        {
            result=0;
            while(n!=0)
            {
                result+=(n%10)*(n%10);
                n/=10;
            }
            n=result;
            
        }
        
        return n==1;
    }
    
};