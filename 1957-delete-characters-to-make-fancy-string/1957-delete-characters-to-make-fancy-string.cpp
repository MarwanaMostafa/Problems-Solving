class Solution {
public:
    string makeFancyString(string s) {
        
        string result="";
        
        for(int i=0;i<s.size();i++)
        {   
            if(s[i]==s[i+1]&&s[i+1]==s[i+2])
                     continue;
            result+=s[i];
        }
        
        
        return result;        
        
    }
};