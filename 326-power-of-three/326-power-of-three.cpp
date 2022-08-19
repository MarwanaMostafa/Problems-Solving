class Solution {
public:
    bool isPowerOfThree(int n) {
     
        if(n<=2147483647  &&n>0 )
            return (1162261467 % n == 0)  ;

            return false ;
    }
};