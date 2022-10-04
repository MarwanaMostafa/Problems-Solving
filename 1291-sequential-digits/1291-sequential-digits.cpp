class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
           vector<int> sequentialNumbers;
    sequentialNumbers.push_back(12);
    sequentialNumbers.push_back(23);
    sequentialNumbers.push_back(34);
    sequentialNumbers.push_back(45);
    sequentialNumbers.push_back(56);
    sequentialNumbers.push_back(67);
    sequentialNumbers.push_back(78);
    sequentialNumbers.push_back(89);
    sequentialNumbers.push_back(123);
    sequentialNumbers.push_back(234);
    sequentialNumbers.push_back(345);
    sequentialNumbers.push_back(456);
    sequentialNumbers.push_back(567);
    sequentialNumbers.push_back(678);
    sequentialNumbers.push_back(789);
    sequentialNumbers.push_back(1234);
    sequentialNumbers.push_back(2345);
    sequentialNumbers.push_back(3456);
    sequentialNumbers.push_back(4567);
    sequentialNumbers.push_back(5678);
    sequentialNumbers.push_back(6789);
    sequentialNumbers.push_back(12345);
    sequentialNumbers.push_back(23456);
    sequentialNumbers.push_back(34567);
    sequentialNumbers.push_back(45678);    sequentialNumbers.push_back(56789);

    sequentialNumbers.push_back(123456);
    sequentialNumbers.push_back(234567);
    sequentialNumbers.push_back(345678);
    sequentialNumbers.push_back(456789);
    sequentialNumbers.push_back(1234567);
    sequentialNumbers.push_back(2345678);
    sequentialNumbers.push_back(3456789);
    sequentialNumbers.push_back(12345678);
    sequentialNumbers.push_back(23456789);
    sequentialNumbers.push_back(123456789);



    vector<int> result;
    for (int i = 0; i < sequentialNumbers.size(); i++)
        if (sequentialNumbers[i] >= low && sequentialNumbers[i] <= high)
            result.push_back(sequentialNumbers[i]);
    return result;

    }
};