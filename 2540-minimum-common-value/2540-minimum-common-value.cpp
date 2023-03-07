class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
    int mid;
    int l=0,r=nums1.size();
    while(l<r)
    {
        mid=l+(r-l)/2;
        if(0<=nums1[mid])
            r=mid;
        else
            l=mid+1;
    }
    int l2=0,r2=nums2.size();
    while(l2<r2)
    {
        mid=l2+(r2-l2)/2;
        if(0<=nums2[mid])
            r2=mid;
        else
            l2=mid+1;
        if(nums1[l]==nums2[l2])
            return nums1[l];
    }

    if (nums1[l]<nums2[l2])
        nums1[l]=-1;
    else
        nums2[l2]=-1;


    if(nums2[nums2.size()-1]==-1||nums1[nums1.size()-1]==-1)
    return -1;

    return getCommon(nums1,nums2);

}};