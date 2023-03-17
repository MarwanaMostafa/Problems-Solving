class Solution {
public:
  void convertToBinary(int x,int y,string &x1,string &y1){
    
    while(x!=0 || y!=0)
    {
        if(x%2==0)
            x1+='0';
        else
            x1+='1';
        
        if(y%2==0)
            y1+='0';
        else
            y1+='1';
        
        x/=2;
        y/=2;
    }
}
int hammingDistance(int x, int y) {
    string x1,y1="";
    int result=0;
    convertToBinary(x,y,x1,y1);
    for(int i=0;i<x1.length();i++)
        if(x1[i]!=y1[i])
            result++;
    return result;
}

};