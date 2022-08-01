//problem Description:https://leetcode.com/problems/roman-to-integer/

class Solution {
    static int checkDigit(char c) {
        if (c == 'V')
            return 5;
        else if (c == 'X')
            return 10;
        else if (c == 'L')
            return 50;
        else if (c == 'C')
            return 100;
        else if (c == 'D')
            return 500;
        else if (c == 'M')
            return 1000;
        else
            return 1;
    }

    public int romanToInt(String s) {
        int number = 0;
        int i = 0;
        for (; i < s.length() - 1; i++) {

            if ((s.charAt(i + 1) == 'V' || s.charAt(i + 1) == 'X') && s.charAt(i) == 'I') {
                number += checkDigit(s.charAt(i + 1)) - 1;
                i++;
            }

            else if ((s.charAt(i + 1) == 'L' || s.charAt(i + 1) == 'C') && s.charAt(i) == 'X') {
                number += checkDigit(s.charAt(i + 1)) - 10;
                i++;

            } else if ((s.charAt(i + 1) == 'D' || s.charAt(i + 1) == 'M') && s.charAt(i) == 'C') {
                number += checkDigit(s.charAt(i + 1)) - 100;
                i++;

            } else {
                number += checkDigit(s.charAt(i));

            }
        }
        if (i < s.length())
            number += checkDigit(s.charAt(i));
    return number;
    }
}
