class Solution {
    public boolean isPowerOfFour(int n) {
        
         double temp = Math.log(n) / Math.log(4);
    int result =(int) temp;
    if (n <= 2147483647 && n > 0 && result - temp == 0)
        return true;

    return false;
        
        
    }
}