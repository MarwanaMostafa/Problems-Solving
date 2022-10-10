class Solution {
public:
    int calPoints(vector<string>& operations) {
        
    vector<int> result;
    int summation=0;
    for (int i = 0; i < operations.size(); i++)
    {
        if (operations[i] == "C")
            result.pop_back();
        else if (operations[i] == "D")
            result.push_back(result.back() * 2);
        else if (operations[i] == "+")
            result.push_back(result.back() + result[result.size() - 2]);
        else
            result.push_back(stoi(operations[i]));
    }
    for(int i:result)
        summation+=i;
        return summation;
    }
};