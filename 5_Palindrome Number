class Solution {
    public boolean isPalindrome(int number) {
          
        //these if conditions save memory more than time 
        if (number < 0)
            return false;

        if (number % 10 == 0 && number != 0)
            return false;
        if (number >= Math.pow(2, 31) - 1 && number <= Math.pow(-2, 31))
            return false;

        int resultReverseNumber = 0;

        int tempNumber = number;
        while (tempNumber != 0) {
            int temp = tempNumber % 10;
            resultReverseNumber =(resultReverseNumber*10)+ temp;
            tempNumber /= 10;
        }
        if (number == resultReverseNumber)
            return true;
        return false;


    }
}
