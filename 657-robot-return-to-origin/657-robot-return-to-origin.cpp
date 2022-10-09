class Solution {
public:
    bool judgeCircle(string moves) {
        int LR=0;   
        int UD=0;

        for(int i=0;i<moves.length();i++)
        {
            if(moves[i]=='L')
                LR+=-1;
            else if(moves[i]=='R')
                LR+=1;
            
            else if(moves[i]=='U')
                UD+=1;
            else
                UD-=1;
            
        }
        if(UD==0 &&LR==0)
                return true;
        return false;
    }
};