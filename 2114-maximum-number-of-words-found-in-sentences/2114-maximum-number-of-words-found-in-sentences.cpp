class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords=INT_MIN;
        int counter=1;

        for(int i=0;i<sentences.size();i++){
        { 
            for(int j=0;j<sentences[i].length();j++)
                if(sentences[i][j]==' ')
                    counter++;
            if(counter>maxWords)
                maxWords=counter;
            counter=1;
        }
        }
        return maxWords;
    }
};