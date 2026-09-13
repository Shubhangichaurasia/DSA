class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum = 0 ;
        int m = 0; 
        int dig = 0;
        int i = 0 ;
        while(n>0){
            dig = n%10;
            if(dig !=0){
             m = (pow(10,i)*dig )+ m;
             sum = sum +dig;
             i = i+1;
            }
            n = n/10;
        }
        return (long long int)sum*m;

    }
};