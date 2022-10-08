class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        map<int,int>sort;
        for(int i=0;i<nums.size();i++)
            sort[nums[i]*nums[i]]++;
        vector<int>result;
        for(auto i:sort)
            for(int j=0;j<i.second;j++)
                result.push_back(i.first);

        return result;
    }
};