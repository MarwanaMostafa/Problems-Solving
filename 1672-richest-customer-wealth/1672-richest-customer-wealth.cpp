class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
      int result=INT_MIN;
      for(int i=0;i<accounts.size();i++)
      {
          for(int j=1;j<accounts[i].size();j++)
              accounts[i][0]+=accounts[i][j];
          if(accounts[i][0]>result)
              result=accounts[i][0];
      }
        return result;
    }
};