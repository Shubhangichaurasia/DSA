class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // logic -> for each unique i find unique pairs using 2 sum with sum = -a[i]
        int n = nums.size();
        sort(nums.begin(),nums.end());
         vector<vector<int>>res;
        for(int i = 0 ; i <n-2;i++){
            // for unique i 
            if(i>0 && nums[i]==nums[i-1]) continue;

            //apply 2 sum with sum = -a[i] to find unique pairs
            int left = i+1;
            int right = n-1;
            int sum = -nums[i];
          
            while(left<right)
            {
                int s = nums[left]+nums[right];

                if(s==sum)
                {
                   res.push_back({nums[i],nums[left] ,nums[right]});
                   left++;
                   right--;
                   while(left<n && nums[left]==nums[left-1]) left++;
                   while(right>=0 && nums[right]==nums[right+1]) right--;  //to ensure unique pairs 

                }
               else if (s<sum) left++;
               else right--;
            }
           
        }
      return res;
    }
     
};