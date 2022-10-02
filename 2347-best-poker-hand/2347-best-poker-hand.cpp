class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        
    map<int, int> countRank;
    map<char, int> countSuits;
    for (int i = 0; i < ranks.size(); i++)
        countRank[ranks[i]]++;

    for (int i = 0; i < suits.size(); i++)
        countSuits[suits[i]]++;

    for (auto i : countRank)
        if (i.second >= 3)
            return "Three of a Kind";
    for (auto i : countRank)
         if (i.second >= 2)
            return "Pair";
    for (auto i : countSuits)
        if (i.second == 5)
            return "Flush";
    return "High Card";
    }
};