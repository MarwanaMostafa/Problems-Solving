#include <vector>

class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int n = nums.size();

        // Perform Insertion Sort
        for (int i = 1; i < n; i++) {
            int key = nums[i];
            int j = i - 1;
            while (j >= 0 && nums[j] > key) {
                nums[j + 1] = nums[j];
                j--;
            }
            nums[j + 1] = key;
        }

        // Check for the missing number
        for (int i = 0; i < n; i++) {
            if (nums[i] != i) {
                return i;
            }
        }

        // If all numbers are in place, the missing number is n
        return n;
    }
};
