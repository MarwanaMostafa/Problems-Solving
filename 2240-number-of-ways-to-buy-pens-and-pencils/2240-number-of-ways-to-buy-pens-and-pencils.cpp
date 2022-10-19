class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long counter = 0;
    int temp = 0;
    while (temp <= total)
    {
        counter += ((total - temp) / cost2) + 1;
        temp += cost1;
    }
    return counter;
    }
};