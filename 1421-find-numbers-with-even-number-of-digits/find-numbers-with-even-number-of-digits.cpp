class Solution {
public:
    int findNumbers(vector<int>& nums) {
      
        int cnt  = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++){
               int dig = 0 ;
               int j = nums[i]; 
               int cnti = 0 ;
               while(j>0){
                dig = j%10;
                j = j/10;
                cnti++;
               }
               if(cnti % 2 == 0) cnt++;
        }
        return cnt ;
    }
};