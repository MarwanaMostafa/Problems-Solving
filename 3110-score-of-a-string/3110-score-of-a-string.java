class Solution {
    public int scoreOfString(String s) {
        int absDiff=0;
        
        for(int i=0;i<s.length()-1;i++)
            absDiff+=Math.abs(Integer.valueOf(s.charAt(i))-Integer.valueOf(s.charAt(i+1)));
        
        return absDiff;
    }
}