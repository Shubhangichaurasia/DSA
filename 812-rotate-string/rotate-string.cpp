class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false ;
        else{ 
        for(int i = 0 ; i <s.length();i++){
            if(s==goal) return true;
            s =  s.substr(1)+s[0];
        }
        return false ;
        }
    }
};