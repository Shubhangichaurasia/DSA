class Solution {
public:
    void getallsubsets(vector<int>&nums,vector<int>&ans,int index,vector<vector<int>>&allsubsets){
        //base case 
        if(index == nums.size()){
        //store subsets
          allsubsets.push_back({ans});
          return ;
        }
        //include
        ans.push_back(nums[index]);
        getallsubsets(nums,ans,index+1,allsubsets);

        // backtrack
        ans.pop_back();

        //exclude
        getallsubsets(nums,ans,index+1,allsubsets);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>allsubsets;
        vector<int>ans;
        getallsubsets(nums,ans,0,allsubsets);
        return allsubsets;
    }
};