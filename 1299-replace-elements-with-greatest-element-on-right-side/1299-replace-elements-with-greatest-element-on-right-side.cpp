class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
    int len=arr.size()-1, temp,mx=-1;
    for(int i=len;i>=0;i--)
    {    
        temp=arr[i];
        arr[i]=mx;
        mx=max(mx,temp);
    }    
     return arr;
 
    }
};