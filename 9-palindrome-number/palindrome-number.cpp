class Solution {
public:
    bool isPalindrome(int x) {
        int i = x;
        int dig = 0 ;
        int rev = 0 ;
        while(i>0){
           dig = i%10;
           if(rev>INT_MAX/10 || rev<INT_MIN/10)
           return false;
           rev = rev*10+dig;
           i = i/10;
        }
        if(rev ==x) return true;
        else return false;
        

    }
};