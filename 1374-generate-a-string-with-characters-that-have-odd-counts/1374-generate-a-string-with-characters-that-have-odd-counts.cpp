class Solution {
public:
    string generateTheString(int n) {
        
    string temp(n - 1, 'a');
    if (n % 2 == 0)
        return (temp + 'b');
    return (temp + 'a');
    }
};