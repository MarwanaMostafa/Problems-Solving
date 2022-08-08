class Solution {
public:
    int longestValidParentheses(string s) {
    int length = s.length();
    stack<char> parentheses;
    stack<int> index;
    char temp;

    if (length == 0 || length == 1)
        return 0;
        
    bool flag = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ')')
            flag = true;
    }
    if (!flag)
        return 0;
        
    parentheses.push(s[0]);
    int LongestValidParentheses = 0;
    for (int i = 1; i < length; i++)
    {
        if (s[i] == ')')
        {
            if (parentheses.empty() && i == length)
                break;
            if (parentheses.empty() && i != length)
            {
                parentheses.push(s[i]);
                index.push(i);
                continue;
            }
            temp = parentheses.top();
            parentheses.pop();
            if (index.size() > 0)
                index.pop();

            if (temp == '(' && s[i] == ')')
                LongestValidParentheses += 2;
            else
            {
                parentheses.push(temp);
                parentheses.push(s[i]);
                index.push(i);
            }
        }
        else
        {
            parentheses.push(s[i]);
            index.push(i);
        }
    }
    if (index.size() > 0)
    {
        int temp1 = longestValidParentheses(s.substr(index.top()));
        int temp2 = longestValidParentheses(s.substr(0, index.top()));
        if (temp1 > temp2)
            return temp1;
        else
            return temp2;
    }
    return LongestValidParentheses;

        
    }
};
