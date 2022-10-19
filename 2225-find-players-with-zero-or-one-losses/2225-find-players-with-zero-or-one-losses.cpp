class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
            vector<vector<int>>resultt;
    resultt.push_back({});
    resultt.push_back({});
    map<int,int>scores;
    for(int i=0;i<matches.size();i++)
     scores[matches[i][0]]=0;

    for(int i=0;i<matches.size();i++)
        scores[matches[i][1]]--;
    
        for(auto i:scores)
    {    if(i.second==0)
            resultt[0].push_back(i.first);
        else if(i.second==-1)
            resultt[1].push_back(i.first);
    }
    return resultt;
    }
};