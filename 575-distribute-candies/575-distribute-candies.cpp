class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
          set<int> count;
    int len = candyType.size();
    for (int i = 0; i < len; i++)
        count.insert(candyType[i]);
    if ((len / 2) >= count.size())
        return count.size();
    return (len / 2);
    }
};