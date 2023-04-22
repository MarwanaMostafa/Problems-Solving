class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
            
        
        int l=0,r=matrix.size(),mid=0,indexRow=0;
       
        while(l<r-1)
        {
            mid=l+(r-l)/2;
            if(matrix[mid][0]<=target)
                l=mid;
            else
                r=mid;
        }
        indexRow=l;
        l=0,r=matrix[indexRow].size();

        while(l<r)
        {
            mid=l+(r-l)/2;
            if(matrix[indexRow][mid]==target)
                return true;
            else if(matrix[indexRow][mid]<target)
                l=mid+1; 
            else
                r=mid;
            
        }
        
        
        
        
        return false;
    }
};