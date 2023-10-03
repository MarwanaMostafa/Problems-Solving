class Solution {
public:
    bool isFascinating(int n) {
  
        int num1=n;
        int num2=n*2;
        int num3=n*3;
        
        set<int> result;
        while(num1!=0)
        {
            cout<<num1%10<<endl;
            cout<<num2%10<<endl;
            cout<<num3%10<<endl;
            if(num1%10!=0)
                result.insert(num1%10);
            if(num2%10!=0)
                result.insert(num2%10);
            if(num3%10!=0)
                result.insert(num3%10);
            
            num1/=10;
            num2/=10;
            num3/=10;
        }
        return result.size()==9;
        
        
    }
};