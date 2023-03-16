class Solution {
public:
    int pivotInteger(int n) {
  int result, temp = 0;
    for (int i = 1; i <= n; i++) {

        for (int j = 0; j <= i; j++)
            result += j;
        for (int k = i; k <= n; k++)
            temp += k;
        if (result == temp)
            return i;
        temp=0, result = 0;
    }
    return -1;
}};