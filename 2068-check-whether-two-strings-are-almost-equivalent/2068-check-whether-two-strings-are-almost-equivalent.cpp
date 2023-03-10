class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        std::unordered_map<char,int>count;
        for(int i=0;i<word1.length();i++) {
            count[word1[i]]++;
            count[word2[i]]--;
        }
        for(auto x:count)
            if(x.second>3||x.second<-3)
                return false;
        return true;
    }
};