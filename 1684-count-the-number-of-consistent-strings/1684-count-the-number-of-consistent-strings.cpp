class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int counter=0;
        for(int i=0;i<words.size();i++)
        {
            int j=0;
            for(;j<words[i].length();j++)
                if(allowed.find(words[i][j])==string::npos )
                    break;
            if(j==words[i].length())
                counter++;
        }
        return counter;
    }
};