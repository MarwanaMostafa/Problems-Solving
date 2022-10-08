class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
         if (bills[0] == 10 || bills[0] == 20)
        return false;
    int inHand5 = 0;
    int inHand10 = 0;
    for (int i = 0; i < bills.size(); i++)
    {
        if (bills[i] == 5)
            inHand5++;
        else if (bills[i] == 10)
        {
            if (inHand5 > 0)
                inHand5--;
            else
                return false;
            inHand10++;
        }
        else
        {
            if (inHand5 > 0 && inHand10 > 0)
            {
                inHand5--;
                inHand10--;
            }
            else if(inHand5>2)
                inHand5-=3;
            else
                return false;
        }
    }
    return true;
    }
};