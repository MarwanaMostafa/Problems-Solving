class Solution {
public:
    vector<string> findWords(vector<string>& words) {
            vector<string> result;
    string row1 = "qwertyuiop";
    string row2 = "asdfghjkl";
    string row3 = "zxcvbnm";
    string temp = "";
    bool flag = true;
    // ["Hello","Alaska","Dad","Peace"]
    for (int i = 0; i < words.size(); i++)
    {
        temp = words[i];
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);

        if (row1.find(temp[0]) != string::npos)
        {
            for (int j = 1; j < words[i].length(); j++)
                if (row1.find(temp[j]) == string::npos)
                {
                    flag = false;
                    break;
                }
        }
        else if (row2.find(temp[0]) != string::npos)
        {
            for (int j = 1; j < words[i].length(); j++)
                if (row2.find(temp[j]) == string::npos)
                {
                    flag = false;
                    break;
                }
        }
        else
        {
            for (int j = 1; j < words[i].length(); j++)
                if (row3.find(temp[j]) == string::npos)
                {
                    flag = false;
                    break;
                }
        }
        if (flag)
            result.push_back(words[i]);
        flag = true;
    }
    return result;
    }
};