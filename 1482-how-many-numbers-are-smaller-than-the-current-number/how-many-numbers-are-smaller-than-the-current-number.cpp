class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>sorted = nums,ans;
        //this will make a copy of nums vector and ans ->empty vector
        sort(sorted.begin(),sorted.end());
        for(int i:nums){
           ans.push_back(lower_bound(sorted.begin(),sorted.end(),i)-sorted.begin());
        }
        return ans;
    }
};