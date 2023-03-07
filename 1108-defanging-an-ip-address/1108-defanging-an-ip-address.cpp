class Solution {
public:
    string defangIPaddr(string address) {
  std::string result;
    for (auto i :address ) {
            if(i=='.')
                result+="[.]";
            else
                 result+=i;
    }
    
    return  result;      
    }
};