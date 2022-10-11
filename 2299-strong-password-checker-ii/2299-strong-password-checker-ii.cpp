class Solution {
public:
    bool strongPasswordCheckerII(string password) {
           if (password.length() < 8)
        return false;
    bool condition = true;
    for (int i = 0; i < password.length(); i++)
        if (password[i] > 47 && password[i] < 58)
        {
            condition = false;
            break;
        }
    if (condition)
        return false;
    condition = true;
    for (int i = 0; i < password.length(); i++)
        if (password[i] > 64 && password[i] < 91)
        {
            condition = false;
            break;
        }

    if (condition)
        return false;
    condition = true;

    for (int i = 0; i < password.length(); i++)
        if (password[i] > 96 && password[i] < 123)
        {
            condition = false;
            break;
        }

    if (condition)
        return false;
    condition = true;
    for (int i = 0; i < password.length(); i++)
        if (password[i]=='!'||password[i]=='@'||password[i]=='#'||password[i]=='$'||password[i]=='%'||password[i]=='^'||password[i]=='&'||password[i]=='*'||password[i]=='('||password[i]==')'||password[i]=='-'||password[i]=='+')
        {
            condition = false;
            break;
        }

    if (condition)
        return false;
    for (int i = 0; i < password.length(); i++)
        if (password[i] ==password[i+1] )
        {
            condition = true;
            break;
        }

    if (condition)
        return false;
    return true;
    }
};