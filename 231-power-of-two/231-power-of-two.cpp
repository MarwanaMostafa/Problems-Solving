class Solution {
public:
    bool isPowerOfTwo(int n) {
        
            
            if(n<=2147483647 &&n >= -2147483647)
               return (n != 0) && ((n & (n - 1)) == 0);

            return false ;
    }
};