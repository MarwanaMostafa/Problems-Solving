class Solution {
public:
    bool rotateString(string s, string goal) {
        int len=s.length();
        for(int i=0;i<len;i++)
        {
            s=s.substr(1,len)+s[0];
            if(s==goal)
                return true;            
        }
        return false;
    }
};