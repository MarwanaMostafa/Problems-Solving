class Solution {
public:
    char intToChar(string s)
{
    if (s == "1")
        return 'a';
    else if (s == "2")
        return 'b';
    else if (s == "3")
        return 'c';
    else if (s == "4")
        return 'd';
    else if (s == "5")
        return 'e';
    else if (s == "6")
        return 'f';
    else if (s == "7")
        return 'g';
    else if (s == "8")
        return 'h';
    else if (s == "9")
        return 'i';
    else if (s == "10#")
        return 'j';
    else if (s == "11#")
        return 'k';
    else if (s == "12#")
        return 'l';
    else if (s == "13#")
        return 'm';
    else if (s == "14#")
        return 'n';
    else if (s == "15#")
        return 'o';
    else if (s == "16#")
        return 'p';
    else if (s == "17#")
        return 'q';
    else if (s == "18#")
        return 'r';
    else if (s == "19#")
        return 's';
    else if (s == "20#")
        return 't';
    else if (s == "21#")
        return 'u';
    else if (s == "22#")
        return 'v';
    else if (s == "23#")
        return 'w';
    else if (s == "24#")
        return 'x';
    else if (s == "25#")
        return 'y';
    else
        return 'z';
    return ' ';
}
string freqAlphabets(string s)
{
    string result = "";
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (i < len - 2 && s[i + 2] == '#')
        {
            string temp = "";
            temp+=s[i];
            temp+= s[i + 1];
            temp+= s[i + 2];
            result += intToChar(temp);
            i+=2;
        }
        else
        {
            string temp = "";
            temp+=s[i] ;
            result += intToChar(temp);
    }}
    return result;
}
};