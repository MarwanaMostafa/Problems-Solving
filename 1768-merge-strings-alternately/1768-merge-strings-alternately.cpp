class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result="";
        int i=0;
        if(word1.length()>word2.length())
        {
            for(;i<word2.length();i++)
            {
                result+=word1[i];
                result+=word2[i];
            }
            
            for(;i<word1.length();i++)
                result+=word1[i];
        }
        else{
            for(;i<word1.length();i++)
            {
                result+=word1[i];
                result+=word2[i];
            }
            
            for(;i<word2.length();i++)
                result+=word2[i];
        }
        return result;
    }
};