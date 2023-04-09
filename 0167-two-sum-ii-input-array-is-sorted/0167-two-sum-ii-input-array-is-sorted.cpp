class Solution {
public:
    

    vector<int> twoSum(vector<int>& numbers, int target) {
        int len=numbers.size();        
        for(int i=0;i<len-1;i++)
        {   
            int l=i+1;
            int r=len;
        
                while(l<r)
                    {
                      int mid=l+(r-l)/2;
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