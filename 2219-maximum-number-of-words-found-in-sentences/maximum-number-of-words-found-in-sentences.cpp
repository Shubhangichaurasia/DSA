class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0 ; 
        for(int i = 0 ; i <sentences.size();i++){
            int cnt = 1 ; 
            for(char c : sentences[i] ){
                 if(c==' ') cnt++;
               
            }
              maxi = max(cnt,maxi);
        }
        return maxi ;
    }
};