class Solution {
public:
    string interpret(string command) {
     string result="";
        for(int i=0;i<command.length();i++)
        {
            if(command[i]=='('&&command[i+1]=='a' )
            {
             result+="al";
             i+=3;
            }
            else if(command[i]=='(' )
            {
                result+="o";
                i++;
            }
            else 
                result+="G";
        }
        return result;
    }
};