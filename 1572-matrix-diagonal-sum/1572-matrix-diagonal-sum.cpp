class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
    
   int diagonalSummation=0,lenMat=mat[0].size();
   
   if(lenMat==1)
        return mat[0][0];
    
    for(int i=0;i<mat.size();i++)
        diagonalSummation+=mat[i][i]+mat[i][lenMat-i-1];    
   
    if(lenMat%2!=0)
        diagonalSummation-=mat[lenMat/2][lenMat/2];
    return  diagonalSummation;
    }
};