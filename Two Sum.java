//problem Description:https://leetcode.com/problems/two-sum/
class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] soultion = { 0, 0 };
        for (int i = 0; i < nums.length; i++) {

            for (int j = i+1; j < nums.length; j++) {
                if (nums[i] + nums[j] == target) {
                    soultion[0] = i;
                    soultion[1] = j;
                    return soultion;
                }
            }

        }
        return soultion;
    }
}
