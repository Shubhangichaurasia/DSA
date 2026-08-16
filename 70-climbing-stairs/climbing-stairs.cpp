class Solution {
public:
    int climbStairs(int n) {
    //memory optimization + tabulation
    if(n==1||n==2) return n ;

    int prev1 = 2;//n-1
    int prev2 = 1 ;//n-2

    int result = prev1;
    for(int i  = 3 ; i<=n;i++){
        result = prev1+prev2;
        prev2= prev1 ;
        prev1 = result;

            }
   
    
    return result;
    }
};
  /*
  //base case 
       if(n==1 || n==2) return n;

    //    //recursive function 
    // 2 choices climb 1 step at once or climb 2 steps at once
        return climbStairs(n-1)//taking 1st step only
         +climbStairs(n-2);// taking 2 steps at once
         


         //tabulation dp
    
   if(n<=2) return n;
    vector<int>dp(n+1);
   // dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3;i<=n ;i++)
       dp[i] = dp[i-1]+dp[i-2];
    return dp[n];
    }
*/