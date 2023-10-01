class Solution {
public:
    string convertToBase7(int num) {
        
        if(num==0)
            return "0";
        string numberInBase7="";
        bool isNegative=false;
        if(num<0)
        {    
            isNegative=true;
            num*=-1;
        }
        while(num>0)
        {
            
            char digit='0'+(num%7);
            num/=7;//divide num over 7
            numberInBase7=digit+numberInBase7;
            
        }
        if(isNegative)
                numberInBase7="-"+numberInBase7;
    
        return numberInBase7;
    }
};