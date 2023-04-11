class Solution {
public:
    int mySqrt(int x) {
            int counter = 0;
    for (int i = 1; x > 0; i = i + 2, counter++)
        x -= i;

    if (x < 0)
        return counter - 1;
    return counter;

        
    }
};