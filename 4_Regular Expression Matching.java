//Problem Description:https://leetcode.com/problems/regular-expression-matching/
class Solution {
    public boolean isMatch(String s, String p) {
        
        
        int lengthS = s.length();
        int lengthP = p.length();

        if (lengthS == 0 && lengthP == 0)
            return true;
        if (p.contains(".*") && lengthP == 2)
            return true;
        if (!p.contains("*") && lengthS > lengthP)
            return false;
        if (lengthP == 0)
            return false;

        boolean[][] isMatch = new boolean[lengthS + 1][lengthP + 1];
        isMatch[0][0] = true;

        for (int i = 2; i < lengthP + 1; i++)
            if (p.charAt(i - 1) == '*')
                isMatch[0][i] = isMatch[0][i - 2];
    // aaa
    // a*a
    // "mis siss ippi"
    // "mis *is* p*."

        for (int i = 1; i < lengthS + 1; i++)
            for (int j = 1; j < lengthP + 1; j++) {
                if (s.charAt(i - 1) == p.charAt(j - 1) || p.charAt(j - 1) == '.')
                    isMatch[i][j] = isMatch[i - 1][j - 1];
                else if (j > 1 && p.charAt(j - 1) == '*') {
                    isMatch[i][j] = isMatch[i][j - 2];
                    if (p.charAt(j - 2) == '.' || p.charAt(j - 2) == s.charAt(i - 1))
                        isMatch[i][j] = isMatch[i][j] | isMatch[i - 1][j];

                }
            }

        return isMatch[lengthS][lengthP];
    
        
        
}}
