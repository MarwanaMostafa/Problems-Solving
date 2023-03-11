class Solution {
public:
    void separateWords(std::unordered_map<std::string ,int> &count,std::string s)
{
        std::string temp="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            count[temp]++;
            temp="";
            continue;
        }
        temp+=s[i];
    }
    count[temp]++;

}
std::vector<std::string> uncommonFromSentences(std::string s1, std::string s2) {
    std::unordered_map<std::string ,int>count;
    separateWords(count,s1);
    
    separateWords(count,s2);
    std::vector<std::string>result;
    for(auto x:count)
        if(x.second==1)
            result.push_back(x.first);
    return result;

}
};