class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        
        
        for(int i = 0 ; i <nums.size();i++){
            int dig = 0 ;
            int sum = 0 ;
            int j = nums[i];
            while(j>0){
                dig = j%10;
                sum = dig+sum;
                j = j/10;
            }
            if(sum==i) return i ;
           
          
        }
        return -1;   
         }
};
