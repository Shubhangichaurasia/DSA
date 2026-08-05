class Solution {
public:
    unordered_set<string>st;
    vector<string>solve(string &s){
        if (s.empty()){
            return {""};
        }
        vector<string >result;
        for(int l = 1;l<=s.length();l++){
            string currWord = s.substr(0,l);
            if(st.count(currWord)){
                string remainWord = s.substr(l);
                vector<string>remainResult = solve(remainWord);
                for(string &w:remainResult){
                    string toAdd = currWord+(w.empty()?"":" ")+w;
                    result.push_back(toAdd);
                }
            }
        }
        return result;
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        for(string &word :wordDict){
            st.insert(word);
        }
        return solve(s);
    }
};