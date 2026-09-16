class Solution {
public:
    int find_dig_sum(int n , int t){
        int original  = n;
         int dig = 0;
        int prod = 1 ; 
        while(n>0){
            dig = n%10;
            prod*=dig;
            n = n/10;
        }
        if(prod%t==0) return original;
        else return find_dig_sum(original+1,t);
        
    }
    int smallestNumber(int n, int t) {
     return   find_dig_sum(n,t);
       
    }
};