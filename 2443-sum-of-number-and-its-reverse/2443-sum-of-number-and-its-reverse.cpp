class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        int temp, result=0;
        for(int i=0; i<= num; i++)
        {
            temp = i;
            while(temp)
            { 
                result= result*10 + temp%10;
                temp /= 10;
            }
            
            if(i + result == num) return true;
            result=0;
        }
        return false;
    }
};