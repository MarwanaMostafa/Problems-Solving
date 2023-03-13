class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int result=0;
        unordered_map<string,int>count;
                unordered_map<string,int>count2;

        for(int i=0;i<words1.size();i++)
            count[words1[i]]++;
        for(int i=0;i<words2.size();i++)
            count2[words2[i]]++;
        for(auto x:count)
            if(x.second==count2[x.first]&&x.second==1 &&count[x.first]==1 )
                result++;
        return result;
    }
};