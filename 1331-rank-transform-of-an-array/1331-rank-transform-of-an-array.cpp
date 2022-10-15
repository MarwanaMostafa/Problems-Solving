class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int>count;
        for(int i=0;i<arr.size();i++)
            count[arr[i]]++;
        
        int counter=1;
        for(auto i:count){
            count[i.first]=counter;
            counter++;
        }
        for(int i=0;i<arr.size();i++)
            arr[i]=count[arr[i]];
    return arr;
    }
};