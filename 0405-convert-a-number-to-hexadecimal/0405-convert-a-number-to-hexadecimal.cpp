class Solution {
public:
    string toHex(int num) {
         unsigned int ourNum = num;
        
        string str;
        char ourArray[17] = "0123456789abcdef";
        
        do {
            str = ourArray[ourNum % 16]+str;
            ourNum /= 16;

        } while (ourNum); 

        return str;
    }
};