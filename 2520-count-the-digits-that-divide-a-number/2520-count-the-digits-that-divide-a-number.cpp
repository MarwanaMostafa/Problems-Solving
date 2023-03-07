class Solution {
public:
    int countDigits(int num) {
        int temp=num,counter=0;
        while(temp>0)
        {
            if(num % (temp%10) ==0)
                counter++;
            temp=temp/10;
        }
        return counter;
    }
};