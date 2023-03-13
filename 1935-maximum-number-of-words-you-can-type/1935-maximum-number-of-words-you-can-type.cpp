class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
      
        std::string temp="";
        int result=0;
        text+=" ";
        for(int i=0;i<text.length();i++)
        {
            if(text[i]==' ')
            {
                bool found=false;
                for(int j=0;j<brokenLetters.length();j++)
                    if (temp.find(brokenLetters[j]) != std::string::npos)
                    {
                        found=true;
                        break;
                    }
                if(!found)
                    result++;
                temp="";
                continue;
            }
            temp+=text[i];
        }
        
        return result;
    }
};