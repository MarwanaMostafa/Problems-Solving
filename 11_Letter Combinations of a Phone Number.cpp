class Solution {
public:
    vector<string> letterCombinations(string digits) {
  
           int length = digits.length();
    vector<string> tempresult;
    vector<string> result;
    if (length == 0)
        return result;

    string characters[9][4] = {{"a", "b", "c", ""}, {"d", "e", "f", ""}, {"g", "h", "i", ""}, {"j", "k", "l", ""}, {"m", "n", "o", ""}, {"p", "q", "r", "s"}, {"t", "u", "v", ""}, {"w", "x", "y", "z"}};
    if (length == 1)
    {
        for (int j = 0; j < 4; j++)
        {
            string temp = "";
            temp = characters[digits[0] - '0' - 2][j];//because phone digits which contain characters strating from 2 to 9
            if (temp.length() < 1)
                continue;
            result.push_back(temp);
        }
        return result;
    }
    if (length == 2)
    {

        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
            {
                string temp = "";
                temp = characters[digits[0] - '0' - 2][i];
                temp += characters[digits[1] - '0' - 2][j];
                if (temp.length() < 2)
                    continue;
                result.push_back(temp);
            }
        return result;
    }
    tempresult = letterCombinations(digits.substr(0, length - 1));

    for (int i = 0; i < tempresult.size(); i++)
    {
        for (int j = 0; j < 4; j++)
        {
            string temp = "";
            temp = tempresult[i] + characters[digits[length - 1] - '0' - 2][j];
            if (temp.length() < length)
                continue;
            result.push_back(temp);
        }
    }

    return result;

        
    }
};
