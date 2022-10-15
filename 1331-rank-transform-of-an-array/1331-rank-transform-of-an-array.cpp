class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>result;
        map<int,int>count;
        for(int i=0;i<arr.size();i++)
            count[arr[i]]++;
        int counter=1;
        for(auto i:count){
            count[i.first]=counter;
            counter++;
        }
        for(int i=0;i<arr.size();i++)
            result.push_back(count[arr[i]]);
    return result;
    }
};