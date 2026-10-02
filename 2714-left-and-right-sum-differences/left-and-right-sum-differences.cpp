class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>leftsum ;
        vector<int>rightsum(n);
        int sum = 0 ; 
        //finding left sum 
        for(int i = 0 ; i <nums.size();i++){
            leftsum.push_back(sum);
            sum+=nums[i];
        }
        sum = 0 ;
        for(int i = n-1; i>=0 ; i--){
            rightsum[i] = (sum);
            sum +=nums[i];
        }
        //finding difference 
        vector<int>ans;
        for(int i = 0 ; i<n ; i++){
            ans.push_back(abs(leftsum[i]-rightsum[i]));
        }
        return ans ;
    }
};