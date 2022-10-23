class Solution {
public:
    int longestContinuousSubstring(string s) {
        int result=0;
        int counter=1;
        int len=s.length();
        if(len==1)
            return 1;
        for(int i=0;i<len-1;i++)
        {
            if(s[i+1]-1==s[i])
                counter++;
            else 
                counter=1;
            result=max(counter,result);
        }
        return result;
    }
};