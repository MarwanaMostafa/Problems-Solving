/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
     int l=0,r=n,mid=n/2;
        if(guess(mid)==0)
            return mid;
        if(guess(n)==0)
            return n;
        while(1)
        {
            mid=(l+(n-l)/2);
            if(guess(mid)==-1) 
                n=mid;
            else if(guess(mid)==0)
                return mid;
            else 
                l=mid+1;
        }
    return 0;
    }
};