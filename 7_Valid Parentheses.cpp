class Solution {
public:
    bool isValid(string s) {
   
    int length = s.length();
    stack<char> parentheses;
    char temp;
    if (s[0] == '}' || s[0] == ']' || s[0] == ')')
        return false;
    else if (length % 2 != 0)
        return false;
    else if (length == 0)
        return true;

    parentheses.push(s[0]);
    for (int i = 1; i < length; i++)
    {
        if (s[i] == '}' || s[i] == ']' || s[i] == ')')
        {
            if (parentheses.empty())//this line to case as this :"(){}}{"
                return false;

            temp = parentheses.top();
            parentheses.pop();
            if (temp == '[' && s[i] == ']')
                continue;
            else if (temp == '(' && s[i] == ')')
                continue;
            else if (temp == '{' && s[i] == '}')
                continue;
            else
                return false;
        }
        else
            parentheses.push(s[i]);
    }
    if (parentheses.empty())//if stack is empty then   Parentheses is Valid 
        return true;
    else
        return false;
        
        
    
    }
};
