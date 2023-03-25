class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
     int n = coordinates.size();
        sort(coordinates.begin(),coordinates.end());
        if( n == 1 || n == 2){
            return true;
        }
        double slope = (double)(coordinates[1][1]-coordinates[0][1]) / (double)(coordinates[1][0] - coordinates[0][0]);
        for(int i =1;i<n-1;i++){
            double tempS = (double)(coordinates[i+1][1]-coordinates[i][1]) / (double)(coordinates[i+1][0] - coordinates[i][0]);
            if( abs(tempS) != abs(slope)){
                return false;
            }
        }
        return true;
        
    }
};