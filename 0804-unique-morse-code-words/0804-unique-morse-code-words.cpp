class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
       string table[] = {
        ".-",   "-...", "-.-.", "-..", ".",   "..-.", "--.", "....", "..",   ".---",
        "-.-",  ".-..", "--",   "-.",  "---", ".--.", "--.-", ".-.",  "...",  "-",
        "..-",  "...-", ".--",  "-..-", "-.--", "--.."
    };    
        set<string> res;
        string temp="";
        for(int i=0;i<words.size();i++)
        {
         for(char c: words[i])
             temp+=table[(int)c-97];
        res.insert(temp);
            temp="";
            
        }
        return res.size();
        
        
    }
};