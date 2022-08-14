class Solution {
       public static boolean isPalindrome(String s) {

        int len = s.length();
        for (int i = 0; i < len / 2; i++)
            if (s.charAt(i) != s.charAt(len - i - 1))
                return false;

        return true;
    }
    public String firstPalindrome(String[] words) {
       for (int i = 0; i < words.length; i++)
            if (isPalindrome(words[i]))
                return words[i];

        return "";  
    }
}