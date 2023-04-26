class Solution {
public:
    

    vector<int> twoSum(vector<int>& numbers, int target) {
        int l,r,mid,len=numbers.size();        
        for(int i=0;i<len-1;i++)
        {   
            l=i+1;
             r=len;
        
                while(l<r)
                    {
             mid=l+(r-l)/2;
                      if(numbers[mid]<target-numbers[i])
                            l=mid+1;
                    else if(numbers[mid]==target-numbers[i]) return {i+1,mid+1};
                    else 
                            r=mid;
                    }   
        }
        return {};
    }
};