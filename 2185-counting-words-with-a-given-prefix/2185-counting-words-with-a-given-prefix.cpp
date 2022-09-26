class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
     int count = 0;
    int flag = 0;
    for (int i = 0; i < words.size(); i++)
    {
        for (int ii = 0; ii < words[i].length() && ii < pref.length(); ii++)
        {
            if (words[i][ii] != pref[ii])
                break;
            flag++;
        }
        if (flag == pref.length())
            count++;
        flag=0;
    }
    return count; 
    }
};