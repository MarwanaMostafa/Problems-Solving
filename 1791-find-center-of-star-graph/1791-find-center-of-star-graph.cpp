class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int>findCenter;
        for(int i=0;i<edges.size();i++)
        {
            findCenter[edges[i][0]]++;                                         findCenter[edges[i][1]]++;
        }
        for(auto i: findCenter)
            if(i.second==edges.size())
                return i.first;
        return 0;
    }
};