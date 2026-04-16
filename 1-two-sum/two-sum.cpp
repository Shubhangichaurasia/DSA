class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp; //key -value pair
        for(int i = 0;i<nums.size();i++){
            int compliment = target-nums[i];
            if(mp.find(compliment)!=mp.end())  //if found 
               return {mp[compliment],i};

               mp[nums[i]]=i;//insertion in hash map
        }
        return {};
        
    }
};