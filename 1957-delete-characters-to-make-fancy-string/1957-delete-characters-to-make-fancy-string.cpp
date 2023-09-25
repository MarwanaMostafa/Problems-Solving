class Solution {
public:
    string makeFancyString(string s) {
        string result="";
        int length=s.size();
        
        for(int i=0;i<length;i++)
        {   
            if(s[i]==s[i+1]&&s[i+1]==s[i+2])
                     continue;
        
            result+=s[i];
        }
        return result;        
        
    }
};