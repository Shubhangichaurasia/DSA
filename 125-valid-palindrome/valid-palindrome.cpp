class Solution {
public:
    bool isPalindrome(string s) {
           
        int i = 0 ; 
        int j  = s.length();
        while(i<j){
            // kip non lphnumeric chrcter
        while(i<j&& !isalnum(s[i])) 
          i++;
        while (i<j && !isalnum(s[j]))
          j--;
        //compre fter converting to lowerce 
        if(tolower(s[i])!=tolower(s[j]))
          return false ;
         i++;
         j--;
        }
        
    
    return true;
    }
};