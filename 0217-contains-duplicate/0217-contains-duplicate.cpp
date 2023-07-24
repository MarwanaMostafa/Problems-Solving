class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    std::set<int>setNumber;
        for(int num:nums)
                setNumber.insert(num);
            
    return nums.size() !=setNumber.size();
    }
};