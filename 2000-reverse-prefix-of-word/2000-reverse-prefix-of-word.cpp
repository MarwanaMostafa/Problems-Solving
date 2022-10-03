class Solution {
public:
    string reversePrefix(string word, char ch) {
        
    int x = word.find(ch) + 1;
    string temp = word.substr(0, x);

    reverse(temp.begin(), temp.end());

    return temp + word.substr(x);
    }
};