class Solution {
public:
    string largestGoodInteger(string num) {
     string result="";
    for(int i=0;i<num.length()-2;i++)
    {
        if(num[i]==num[i+1]&&num[i+1]==num[i+2] )
        {
            if(result[0]<num[i]){
                result="";
            result+=num[i];
            result+=num[i+1];
            result+=num[i+2];}
        }
    }
     return result;
    }
};