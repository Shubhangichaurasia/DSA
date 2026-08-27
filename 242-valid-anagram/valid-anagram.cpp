class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
          return false;
          else{
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
          }
        /*int i = 0 ;
        int j = 0 ; 
         while(i<s.length()&&j<t.length()){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else return false;
         }
         return true;
          }
          return true ;
          */
    }
};