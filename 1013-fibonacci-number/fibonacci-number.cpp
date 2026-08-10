class Solution {
public:
    int find(int n ){
        //base case 
        if(n==0 ||n==1)
         return n;
         //recursive function 
         return find(n-1)+find(n-2);
    }
    int fib(int n) {
       return find( n );
    }
};