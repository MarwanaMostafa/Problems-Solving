class Solution {
public:
    bool isFascinating(int n) {
  
        int num1=n;
        int num2=n*2;
        int num3=n*3;
        
        set<int> result;
        while(num1!=0)
        {
            int temp1=num1%10,temp2=num2%10,temp3=num3%10;
            if(temp1!=0)
                result.insert(temp1);
            if(temp2!=0)
                result.insert(temp2);
            if(temp3!=0)
                result.insert(temp3);
            
            num1/=10;
            num2/=10;
            num3/=10;
        }
        return result.size()==9;
        
        
    }
};