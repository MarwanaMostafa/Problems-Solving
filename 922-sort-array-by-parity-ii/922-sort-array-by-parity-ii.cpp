class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
            vector<int> even;
    vector<int> odd;
    vector<int> result;
    int temp = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        temp = nums[i];
        if (temp % 2 == 0)
            even.push_back(temp);
        else
            odd.push_back(temp);
    }
    for (int i = 0; i < nums.size()/2; i++)
    {
            result.push_back(even.back());
            even.pop_back();
             result.push_back(odd.back());
            odd.pop_back();
    }
    return result;

    }
};