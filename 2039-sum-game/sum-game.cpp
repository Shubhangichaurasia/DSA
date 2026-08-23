class Solution {
public:
    bool sumGame(string num) {
        int n = num.length();
        int leftKnownSum = 0 ;
        int rightKnownSum = 0 ; 
        int leftQnMarkCnt = 0 ; 
        int rightQnMarkCnt =0;

        for(int i = 0 ; i <n ; i++)
        {    
            if(num[i]=='?')
            {   
              if(i<n/2)
              {
                 //left side
                 leftQnMarkCnt++;
              }
              else{
                rightQnMarkCnt++;
              }
             

            }
            // nums[i]==any digit
            else
            {
                if(i<n/2)
                {
                    //left side ka sum nikalo remember num ek string h toh usko change kr lena int me 
                    leftKnownSum +=num[i]-'0';
                }
                else 
                {
                //right side ka sum nikalo 
                rightKnownSum +=num[i]-'0';
                }
            }
        }
       int totalQnMarks = leftQnMarkCnt +rightQnMarkCnt;
       if(totalQnMarks%2==1) //odd case alice will win always
         return true ;
        int LEFT = 2*leftKnownSum + 9*leftQnMarkCnt;
        int RIGHT = 2*rightKnownSum + 9*rightQnMarkCnt;
        if(LEFT == RIGHT) //BOB WINS
         return false ; 
         //warna alice will win
        return true ;
    }
};