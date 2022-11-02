class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int counter=0;
        string number=to_string(num);
        string temp="";
        for(int i=0;i+k<=number.length();i++)
        {
            temp=number.substr(i,k);
            if(temp.length()<k)
                break;
            if(stoi(temp)!=0&&num%stoi(temp)==0)
                counter++;
        }
    return counter;
        }
};