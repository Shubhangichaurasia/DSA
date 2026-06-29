class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low = 0 ,high = 0 ,n = nums.size();
        int result = INT_MAX;
        int sum = 0 ; 
        while(high<n){
            sum = sum+nums[high];
            while(sum>=target){
               int length = high-low+1;
               result = min(result,length);
               sum = sum-nums[low];
               low++;
            }
            high++;
            
        }
        if(result==INT_MAX)
            return 0 ;
        return result;
    }
};