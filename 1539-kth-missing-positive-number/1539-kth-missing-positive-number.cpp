class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
         int counter = 1, i = 0;
    for (; k != 0 && i < arr.size(); counter++, i++)
        if (arr[i] != counter)
        {
            k--;
            i--;
        }
    return k+counter-1;
    }
};