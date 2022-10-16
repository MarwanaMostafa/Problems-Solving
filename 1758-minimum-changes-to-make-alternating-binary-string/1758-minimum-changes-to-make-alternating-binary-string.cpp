class Solution {
public:
    int minOperations(string s) {
       int counter1=0;
       int counter2=0;
        
            for(int i=1;i<s.length();i+=2)
            {
                if(s[i]!='1')
                    counter1++;
                 if(s[i]!='0')
                    counter2++;    
            }
            for(int i=0;i<s.length();i+=2)
            { 
                if(s[i]!='0')
                    counter1++;
                if(s[i]!='1')
                    counter2++;
            }
        return min(counter1,counter2);
    }
};