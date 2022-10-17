class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int  flag= coordinates[0]-96;
        int flag2=coordinates[1]-'0';
        if((flag%2!=0 &&flag2%2==0)||(flag%2==0 &&flag2%2!=0))
             return true;
        return false;
        
    }
};