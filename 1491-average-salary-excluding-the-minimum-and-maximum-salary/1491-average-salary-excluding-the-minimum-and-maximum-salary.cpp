class Solution {
public:
    double average(vector<int>& salary) {
        
    int min = INT_MAX;
    int max = INT_MIN;
    double result = 0.0;
    for (int i = 0; i < salary.size(); i++)
    {
        if (salary[i] > max)
            max = salary[i];
        if (salary[i] < min)
            min = salary[i];
        result += salary[i];
    }
            result -= (max + min);

    return result/(salary.size()-2);
    }
};