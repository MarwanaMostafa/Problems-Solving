class Solution {
public:
    int countSegments(string s) {
   if(s.length() == 0)
        return 0;
    int counter = (s[0]!=' ')?1:0;
            s += " ";

    for (int i = 0; i < s.length()-1; i++)
        if (s[i] == ' '&& s[i+1] != ' ' )
            counter++;
   
    return counter;
    }
};