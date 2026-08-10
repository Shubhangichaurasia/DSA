class Solution {
public:
    int bs(vector<int>&nums,int target,int s,int e){
        
        //recursive function
        if(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target){ //left side
                return bs(nums,target,s,mid-1);
            }
            else {
                 return bs(nums,target,mid+1,e);
            }
           

        }
          return -1;
    }
    int search(vector<int>& nums, int target) {
        int s = 0 ; 
        int e = nums.size()-1;
      return  bs(nums,target,s,e);
    }
};