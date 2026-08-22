class Solution {
public:
int findsumofdig(int n ){
     int sum = 0 ; 
     int dig =0;
     while(n>0){
     dig =  n%10;
     sum = sum+dig;
     n = n/10;
     }
     return sum;
}
int dig_product(int n ){
    int pro = 1 ; 
    int dig = 0;
    while(n>0){
        dig = n%10;
        pro = pro*dig;
        n = n/10;
    }
    return pro;
}
    bool checkDivisibility(int n) {
        int sum =  findsumofdig(n)+dig_product(n);
        if(n%sum==0) return true;
        else return false ;
    }
};