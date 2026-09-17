class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;
       // ans.push_back(nums[0]);
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum = sum+nums[i];
            ans.push_back(sum);
        }
        return ans;
    }
};