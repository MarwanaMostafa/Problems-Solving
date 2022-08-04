class Solution {
    public int reverse(int x) {
           if (x >= Math.pow(2, 31)-1 || x <= Math.pow(-2, 31))
            return 0;

        int i = 0;
        int[] numbers = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };// 2^31 ||2^-31 store in 10 digits
        while (true) {
            numbers[i] = x % 10;
            x = x / 10;
            i++;
            if (x == 0)
                break;
        }
        int result = 0;
        for (int J = 0; i != 0; J++, i--)
            result += numbers[J] * Math.pow(10, i - 1);// why to power i-1: because i is represent number of digits and
                                                       // first digit not need multiply by number of digits but need
                                                       // multiply by 10 to power number of digits -1
                                                       // like this 12345 when reverse 5 need * 10000 not 100000
         if (result >= Math.pow(2, 31)-1 || result <= Math.pow(-2, 31))// don't forget this constrain If reversing x
                                                                        // causes the value to go outside the signed
                                                                        // 32-bit integer range [-231, 231 - 1], then
                                                                        // return 0.
            return 0;
        return result;
        
    }
}
