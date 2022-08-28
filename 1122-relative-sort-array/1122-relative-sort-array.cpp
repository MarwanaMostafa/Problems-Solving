class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
           vector<int> result;
            sort(arr1.begin(), arr1.end());

    int len = arr1.size();
    for (int i = 0; i < arr2.size(); i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (arr2[i] == arr1[j])
            {
                result.push_back(arr1[j]);
                arr1[j] = -1;
            }
        }
    }
    for (int i = 0; i < len; i++)
        if (arr1[i] != -1)
            result.push_back(arr1[i]);
    return result;

    }
};