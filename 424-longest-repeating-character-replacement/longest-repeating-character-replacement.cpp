class Solution {
public:
    int find_max_freq(vector<int>f) {
               int maxfreqcnt = -1;
               for(int i = 0 ; i <256;i++)
                maxfreqcnt = max(maxfreqcnt,f[i]);

                return maxfreqcnt;
               
    }
    int characterReplacement(string s, int k) {
       int n = s.length();
       int low = 0;
       int res = INT_MIN;
       vector<int>f(256,0);
       for(int high = 0 ;high<n;high++){
        //high ko include kro 
        f[s[high]]++;
        int len = high-low+1;
        int maxfreqcnt = find_max_freq(f);
        int diff = len-maxfreqcnt;
        
        // jab tak info glt h window shrink kro 
        // info galat tab hoga jab diff>k hoga kyuki agar diff <k ya diff=k hoga toh usse badal kar hum sahi kar saktey h 
        while(diff>k){
            f[s[low]]--;
            low++;
            len = high-low+1;
            maxfreqcnt = find_max_freq(f);
            diff = len-maxfreqcnt;
            
        }
        //if info sahi h toh 
        len = high-low+1;
        res = max(res,len);

       } 
       return res;
    }
};