class Solution {
    public boolean isPalindrome(String s) {
          s = s.toLowerCase();
        s = s.replaceAll(
                "[^a-zA-Z0-9]", "");
        String IsPalindromeResult = "";

        for (int i = s.length() - 1; i >= 0; i--)
            IsPalindromeResult += s.charAt(i);

        if (s.equals(IsPalindromeResult))
            return true;
        else
            return false;

        
    }
}