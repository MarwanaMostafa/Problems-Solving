class Solution {
public:
    string truncateSentence(string s, int k) {
        
    int counterSpace = 0;
    int indexKspace = 0;
    for (int i = 0; i < s.length() && counterSpace < k; i++)
        if (s[i] == ' ')
        {
            counterSpace++;
            indexKspace = i;
        }
        if(counterSpace<k)
            return s;
    return s.substr(0,indexKspace);
    }
};