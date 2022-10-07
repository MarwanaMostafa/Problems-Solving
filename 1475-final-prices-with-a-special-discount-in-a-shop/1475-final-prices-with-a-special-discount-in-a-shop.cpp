class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
           vector<int> result;
    int minPrices = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        for (int j = i + 1; j < prices.size(); j++)
            if (prices[j] <= prices[i])
            {
                minPrices = prices[j];
                break;
            }
        result.push_back(prices[i] - minPrices);
        minPrices=0;
    }
    return result;
 
    }
};