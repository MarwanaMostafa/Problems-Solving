class Solution {
public:
    string reformat(string s) {
    if(s.length()==1)
            return s;
    
    string result = "";
    vector<char> integers;
    vector<char> characters;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] > 47 && s[i] < 58)
            integers.push_back(s[i]);
        else
            characters.push_back(s[i]);
    }

    int lenIntegers = integers.size();
    int lenCharacters = characters.size();
    if (lenIntegers == 0 || lenCharacters == 0 || lenIntegers - lenCharacters > 1 ||
        lenCharacters - lenIntegers > 1)
        return "";
   if (lenIntegers ==lenCharacters)
    {
        for (int i = 0; i < lenCharacters; i++)
        {
            result += integers[i];
            result += characters[i];
        }
    }
        
        
    else if (lenIntegers > lenCharacters)
    {
        for (int i = 0; i < lenCharacters; i++)
        {
            result += integers[i];
            result += characters[i];
        }
        result += integers[lenIntegers - 1];
    }
    else
    {
        for (int i = 0; i < lenIntegers; i++)
        {
            result += characters[i];
            result += integers[i];
        }
        result += characters[lenCharacters - 1];
    }

    return result;
 
    }
};