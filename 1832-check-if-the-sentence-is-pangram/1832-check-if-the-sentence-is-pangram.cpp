class Solution {
public:
    bool checkIfPangram(string sentence) {
       
   set<char> check;
    for (int i = 0; i < sentence.length(); i++)
        check.insert(sentence[i]);
    if (check.size() == 26)
        return true;
        
    return false;
    }
};