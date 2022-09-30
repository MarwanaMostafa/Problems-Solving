class Solution {
public:
    int maximum69Number (int num) {
    if(num==9999)   
        return num;
        
    string x = to_string(num);
    for (int i = 0; i < 4; i++)
        if (x[i] == '6')
        {
            x[i] = '9';
            break;
        }
    return stoi(x);
    }
};