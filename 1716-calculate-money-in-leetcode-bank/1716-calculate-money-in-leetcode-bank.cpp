class Solution {
public:
    int totalMoney(int n) {
        int result=0;
        
        for(int i=0;i<n-(n%7);i+=7)
            result+=28+i;

        for(int i=(n/7)+1;i<(n/7)+1+(n%7);i++)
            result+=i;
            
        return result;
    }
};