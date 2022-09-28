class Solution {
public:
    bool checkIfPangram(string sentence) {
       
    map<char, int> check;
    for (int i = 0; i < sentence.length(); i++)
        check[sentence[i]];
    if (check.size() == 26)
        return true;
    return false ;
    }
};