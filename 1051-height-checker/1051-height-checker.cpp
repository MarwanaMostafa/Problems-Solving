class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int counter = 0;
    vector<int> tempHeights = heights;
    sort(heights.begin(), heights.end());
    for (int i = 0; i < heights.size(); i++)
        if (heights[i] != tempHeights[i])
            counter++;
    return counter;
    }
};