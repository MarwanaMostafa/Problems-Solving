class Solution {
public:
    
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>result;
      
        int counter,number=0;

        for(int i=0;i<arr.size();i++)
        {
            counter=0,number=arr[i];
            while(number!=0){
                 if(number%2!=0)
                     counter++;
                 number/=2;
            }
            result.push_back( make_pair(counter,arr[i]) );

        }
        
        sort(result.begin(),result.end());

        for(int i=0;i<arr.size();i++)
             arr[i]= result[i].second ;
        return arr;
    }
};