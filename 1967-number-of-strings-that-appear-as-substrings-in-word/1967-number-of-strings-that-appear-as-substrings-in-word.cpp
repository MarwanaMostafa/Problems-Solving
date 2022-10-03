class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
            int counter = 0;
    for (int i = 0; i < patterns.size(); i++)
        if (word.find(patterns[i])<=100)
            counter++;
    return counter;

    }
};