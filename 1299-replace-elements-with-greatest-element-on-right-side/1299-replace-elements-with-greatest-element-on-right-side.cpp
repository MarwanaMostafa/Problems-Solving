class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
         vector<int> result;
    int bigger = -1;
    for (int i = 0; i < arr.size(); i++)
    {

        for (int j = i + 1; j < arr.size(); j++)
            if (arr[j] > bigger )
                bigger = arr[j];
        result.push_back(bigger);
        bigger = -1;
    }
    return result;
    }
};