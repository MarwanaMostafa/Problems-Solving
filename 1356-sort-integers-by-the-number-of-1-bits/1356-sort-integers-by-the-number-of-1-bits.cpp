class Solution {
public:
    int numberOfOnes(int number){
        int counter=0;
        while(number!=0){
            if(number%2!=0)
                counter++;
        number/=2;
        }
        return counter     ;   
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>result;
        for(int i=0;i<arr.size();i++)
             result.push_back( make_pair(numberOfOnes(arr[i]),arr[i]) );
        sort(result.begin(),result.end());

        for(int i=0;i<arr.size();i++)
             arr[i]= result[i].second ;
        return arr;
    }
};