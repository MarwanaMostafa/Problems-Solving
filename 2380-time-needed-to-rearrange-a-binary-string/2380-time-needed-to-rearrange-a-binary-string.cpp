class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
    int result=0;
    bool swap=false;    

    for(int i=0;i<s.length();i++)
    {
        swap=false;
        for(int j=0;j<s.length()-1;j++)
        {
            if(s[j]=='1')
                continue;
            if(s[j]=='0'&&s[j+1]=='1')
            {
                s[j]='1';
                s[j+1]='0';
                j++;
                swap=true;
                
            }
        }
        if(swap)
             result++;
    }
        return result;
    }
};
	