class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int i = 0 ; 
       while(i<nums1.size()){
            if(nums1[i]%2==0)
            i++;
        
      
         
          else if(nums1[i]%2!=0)
            i++;
        }
        return true;
      
    }
};