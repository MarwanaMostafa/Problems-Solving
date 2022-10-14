class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
      
    int counter = 0;
    string temp = "";
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == ' ')
        {
            counter++;
            int isLeading=temp.find(searchWord);
            if (isLeading!= string::npos &&isLeading==0)
                return counter;
            temp = "";
        }
        else
            temp += sentence[i];
    }
    counter++;
     int isLeading=temp.find(searchWord);
            if (isLeading!= string::npos &&isLeading==0)
                return counter;
    return -1;
    }
};