class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
            vector<int> result;
        for(int i=0;i<nums1.size();i++)
        {
            
            bool flag=false;
            for(int j=0;j<nums2.size();j++)
                if(nums1[i]==nums2[j])
                {   
                    for(int k=j+1;k<nums2.size();k++)
                        if(nums1[i]<nums2[k])
                        {
                            result.push_back(nums2[k]);
                            flag=true;
                            break;
                        }
                    break;
                }
            
            if(!flag)
                result.push_back(-1);
        }
        return  result;
        
    }
};