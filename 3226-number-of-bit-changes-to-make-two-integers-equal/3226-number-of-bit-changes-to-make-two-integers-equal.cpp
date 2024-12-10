class Solution {
public:
    int minChanges(int n, int k) {
    //why 20 because constraint which max number is 10^6
    bitset<20> firstNumber(n);
    bitset<20> SecondNumber(k);
    int counter=0;
    for (int i = 0; i <20; i++)
    {
        if (firstNumber[i] == 0 && SecondNumber[i] == 1)
            return -1;
        if(firstNumber[i]==SecondNumber[i])
            continue;
        counter++;
    }

    return counter;
    }
};