class Solution {
public:
    bool IsVowel(string word)
    {
        int len=word.length()-1;
        if((word[0]=='a'||word[0]=='u'||word[0]=='o'||word[0]=='i'||word[0]=='e')
          &&(word[len]=='a'||word[len]=='u'||word[len]=='o'||word[len]=='i'||word[len]=='e'
          ))
            return true;
        return false;
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int result=0;
        while(left<=right){
            if(IsVowel(words[left]))
                result++;
        left++;
    
        }
        return result;
    }
};