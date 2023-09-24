class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
       string table[] = {
        ".-",   "-...", "-.-.", "-..", ".",   "..-.", "--.", "....", "..",   ".---",
        "-.-",  ".-..", "--",   "-.",  "---", ".--.", "--.-", ".-.",  "...",  "-",
        "..-",  "...-", ".--",  "-..-", "-.--", "--.."
    };    
        set<string> uniqueMorseCodes;
        string morseRepresentation="";
        for(int i=0;i<words.size();i++)
        {
         for(char c: words[i])
             morseRepresentation+=table[(int)c-97];
            uniqueMorseCodes.insert(morseRepresentation);
            morseRepresentation="";
            
        }
        return uniqueMorseCodes.size();
        
        
    }
};