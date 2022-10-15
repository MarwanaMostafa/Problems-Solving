class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int i=0;i<(arr.size()*5) /100;i++)
        {
            arr[i]=0;
            arr[arr.size()-1-i]=0;
        }
        double result=0;
        for(int i=0;i<arr.size();i++)
            result+=arr[i];
        return result/(arr.size()-arr.size()/10);
    }
};