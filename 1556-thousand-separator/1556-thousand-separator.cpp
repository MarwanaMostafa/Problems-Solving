class Solution {
public:
    string thousandSeparator(int n) {
        string thousandSeparatorNumber = to_string(n);
        int separator = 0;
        string result = "";
        
        for (int i = thousandSeparatorNumber.size() - 1; i >= 0; i--) {
            result = thousandSeparatorNumber[i] + result;
            separator++;
            
            if (separator == 3 && i != 0) {
                result = '.' + result;
                separator = 0;
            }
        }
        
        return result;
    }
};
