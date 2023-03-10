class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        bool result=false;
        for(int i=0;i<target.size();i++)
        {
            result=false;
            for(int j=0;j<arr.size();j++)
                if(target[i]==arr[j])
                {result=true;
                 arr[j]=-1;
                 break;
                }
            if(!result)
                return false;
    }
    return result;
    }
};