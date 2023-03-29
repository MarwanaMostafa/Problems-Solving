class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
   
    
        bool flag =true;
        for(int i=0;i<  ransomNote.length()&&flag;i++)
            for(int j=0;j<magazine.length();j++)
            { if(magazine[j]!=ransomNote[i])
                        flag=false;
                else if (magazine[j]==ransomNote[i]){
                    flag=true;
                    magazine[j]='.';
                    break;
                }}
        return flag;
        }
};