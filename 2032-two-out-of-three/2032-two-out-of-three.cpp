class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
           vector<int> res;
    map<int, int> mapNum1, mapNum2, mapNum3;
    for (int i = 0; i < nums1.size(); i++)
        mapNum1[nums1[i]] = 1;
    for (int i = 0; i < nums2.size(); i++)
        mapNum2[nums2[i]] = 1;
    for (int i = 0; i < nums3.size(); i++)
        mapNum3[nums3[i]] = 1;
    for (int i = 0; i < 101; i++)
        if (mapNum1[i] + mapNum2[i] + mapNum3[i] > 1)
            res.push_back(i);
    return res;

    }
};