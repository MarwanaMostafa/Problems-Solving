class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
    int  temp,mx=-1;
          
    for(int i=arr.size()-1;i>=0;i--)
    {    
        temp=arr[i];
        arr[i]=mx;
        
        mx=max(mx,temp);
    }    
     return arr;
 
    }
};