class Solution {
public:
    int smallestNumber(int n) {
       
        int i=1;
        while(n>=i){
            if(i==n)
                return i;
            i=(i*2)+1;
        }
        return i;
            
    }
};