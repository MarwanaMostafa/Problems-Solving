class Solution {
public:
    int longestContinuousSubstring(string s) {
        int result=1;
        int counter=1;
        for(int i=0;i<s.length()-1;i++)
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