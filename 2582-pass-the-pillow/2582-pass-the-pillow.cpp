class Solution {
public:
    int passThePillow(int n, int time) {
    time =( time % ((n - 1) * 2) ) + 1/*we use +1 to return back again */;
    return min(time, n * 2 - time);
    }
};