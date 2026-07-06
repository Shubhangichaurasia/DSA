class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low = 0 ; 
        int n = fruits.size();
        int res = -1;
        unordered_map<int,int>  mp;
        for(int high= 0 ; high <n ; high++)
        {
            //include high in ans 
            mp[fruits[high]]++;

            //jab tak info galat h usko sahi kro low ko nikal kr
            while(mp.size()>2)
            {
                mp[fruits[low]]--;
                if(mp[fruits[low]]==0)
                mp.erase(fruits[low]);
                low++;
            }
            if(mp.size()<2 || mp.size()==2)
            {
              int len = high-low+1;
              res = max(len,res);
            }
        }
        return res;
    }
};