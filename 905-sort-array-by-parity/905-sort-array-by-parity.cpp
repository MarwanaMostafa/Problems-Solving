class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
      vector<int> even;
    vector<int> odd;
    int temp = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        temp = nums[i];
        if (temp % 2 == 0)
            even.push_back(temp);
        else
            odd.push_back(temp);
    }
    for (int i = 0; i < odd.size(); i++)
        even.push_back(odd[i]);
    return even;
      
    }
};