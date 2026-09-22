class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_words=0;
        for(int i=0;i<sentences.size();i++){
            int c=count(sentences[i].begin(),sentences[i].end(),' ')+1;
            max_words=max(c,max_words);
        }
        return max_words;
    }
};