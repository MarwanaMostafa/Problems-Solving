class Solution {
public:
    int pivotInteger(int n) {
  int result, temp = 0,summationN=(n*(n+1))/2;
    for (int i = 1; i <= n; i++) {

        result=(i*(i+1))/2;
        temp=summationN-result+i;
        if (result == temp)
            return i;
        temp=0, result = 0;
    }
    return -1;
}};