class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
    vector<int> result;
    for (int j = 0; j < nums2.size(); j++)
    {
        if (nums1[0] == nums2[j])
        {
            nums2[j] = -1;
            result.push_back(nums1[0]);
            break;
        }
    }
    for (int i = 1; i < nums1.size(); i++)
    {
        if (nums1[i] == nums1[i - 1])
            continue;

        for (int j = 0; j < nums2.size(); j++)
        {
            if (nums1[i] == nums2[j])
            {
                result.push_back(nums1[i]);
                break;
            }
        }
    }
    return result;
    }
};