//Problem Description:https://leetcode.com/problems/integer-to-roman/

class Solution {
    public String intToRoman(int num) {
     int i = 0;
        int temp = 0;
        String result = "";
        while (true) {
            temp = num% 10;
            switch (i) {
                case 0://first digit from right 
                    if (temp < 4 )
                        result += "I".repeat(temp);
                    else if (temp == 4)
                        result += "IV";
                    else if (temp == 9)
                        result += "IX";
                    else if (temp == 5)
                        result += "V";
                    else if (temp < 9)
                        result += "V" + "I".repeat(temp - 5);
                    break;
                case 1://Second digit from right 
                    if (temp < 4)
                        result = "X".repeat(temp) + result;
                    else if (temp == 4)
                        result = "XL" + result;
                    else if (temp == 9)
                        result = "XC" + result;
                    else if (temp == 5)
                        result = "L" + result;
                    else if (temp < 9)
                        result = "L" + "X".repeat(temp - 5) + result;
                    break;
                case 2://Third digit from right 
                    if (temp < 4)
                        result = "C".repeat(temp) + result;
                    else if (temp == 4)
                        result = "CD" + result;
                    else if (temp == 9)
                        result = "CM" + result;
                    else if (temp == 5)
                        result = "D" + result;
                    else if (temp < 9)
                        result = "D" + "C".repeat(temp - 5) + result;
                    break;
                case 3://Fourth digit from right 
                    if (temp < 4)
                        result = "M".repeat(temp) + result;
                    break;

            }

            num = num / 10;
            i++;
            if (num == 0)
                break;
        }
    return result;   
    }
}
