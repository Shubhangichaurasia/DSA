class Solution {
public:
    int maxProduct(int n) {
        int m = n ; 
        int dig = 0;
        vector<int>ans;
        while(m>0){
            dig = m%10;
            ans.push_back(dig);
            m=m/10;
        }
        sort(ans.begin(),ans.end());
        int h = ans.size();
        return ans[h-1]*ans[h-2];
    }
};