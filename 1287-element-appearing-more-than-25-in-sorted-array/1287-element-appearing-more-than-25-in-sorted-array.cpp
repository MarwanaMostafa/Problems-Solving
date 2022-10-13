class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
       int counter=0;
       int tempcounter=1;int index=0;
       for(int i=0;i<arr.size()-1;i++)
       {
           if(tempcounter>counter){
               counter=tempcounter;
                index=i-counter+1;
               }
           if(arr[i]==arr[i+1])
               tempcounter++;
           else
               tempcounter=1;
          
       } 
        if(tempcounter>counter){
               counter=tempcounter;
                index=arr.size()-1-counter+1;
               }
        return arr[index];   
    }
};