class Solution {
public:
    string removeTrailingZeros(string num) {

        
        string tempNum="";
        int i=num.size()-1;
        
        for(;i>=0;i--)
            if(num[i]!='0')
                break;

        for(int j=0;j<=i;j++)
            tempNum+=num[j];

        
        return  tempNum;
            
        
                
                
        }
};