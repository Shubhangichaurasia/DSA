class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //make a hashmap
        unordered_map<int,int>mp;
        //store frequencies
        for(int a :nums){
            mp[a]++;
        }
        //store hashmap into vector pairs
        vector<pair<int,int>>freq;
        for(auto it:mp){
            freq.push_back({it.second,it.first});
            //storing as (frequency,value)
        }
            //sorting in decending order 
            sort(freq.rbegin(),freq.rend());
        
            //printing first k elements 
            vector<int>ans;
            for(int i =0 ; i < k;i++){
               ans.push_back(freq[i].second);
            }
        
       return ans ;
    }
};
/*
steps to implement->
make hash map 
iterate map and store frequencies
store hashmap into vector of pairs 
sort the values in hashmap into decending order of frequencies
take first k elements 
*/