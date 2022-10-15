class Solution {
public:
    int maxRepeating(string sequence, string word) {
      int counter=0;
        string temp=word;
        while(sequence.find(temp)!=string::npos)
        {
            counter++;
            temp+=word;
        }
        return counter;
    }
};