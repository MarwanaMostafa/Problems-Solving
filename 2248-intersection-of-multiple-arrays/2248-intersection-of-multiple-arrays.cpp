class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int>map;
        int len=nums.size();
        for(int i=0;i<len;i++)
            for(int j=0;j<nums[i].size();j++)
                map[nums[i][j]]++;
        vector<int>result;
        for(auto i: map )
            if(i.second==len)
                result.push_back(i.first);
        return result;
    }
};