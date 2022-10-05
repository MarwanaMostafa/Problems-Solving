class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
            map<int, int> count;
    for (int i = 0; i < candyType.size(); i++)
        count[candyType[i]]++;
    if ((candyType.size() / 2) >= count.size())
        return count.size();
    return (candyType.size() / 2);

    }
};