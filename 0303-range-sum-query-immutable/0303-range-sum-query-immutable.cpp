class NumArray {
public:
    vector<int> nums;
    NumArray(vector<int>& nums) {
        this->nums=nums;
    }
    
    int sumRange(int left, int right) {
        int result=0;
        while(left<=right)
        {
            result+=this->nums[left];
        left++;
        }
            return result;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */