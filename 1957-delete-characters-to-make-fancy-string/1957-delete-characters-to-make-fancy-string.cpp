class Solution {
public:
    string makeFancyString(string s) {
        
        string result="";
        result+=s[0];
        int length=s.size();
        
        for(int i=1;i<length;i++)
        {   
            if(s[i]==s[i-1]&&s[i+1]==s[i])
                     continue;
        
            result+=s[i];
        }
        return result;        
        
    }
};