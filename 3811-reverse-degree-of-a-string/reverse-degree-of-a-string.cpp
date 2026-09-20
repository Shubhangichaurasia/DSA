class Solution {
public:
    int reverseDegree(string s) {
       vector<char>si;
        for(char c = 'z';c>='a';c--){
            si.push_back(c);
        }
        int pro = 1;
        int sum = 0 ;
        for(int i = 0 ; i<s.length();i++){
            for(int j = 0 ; j <si.size();j++){
              if(s[i]==si[j]){
                pro =(i+1)*(j+1);
                sum = pro+sum;
              }
        }
        }
        return sum;
    }
};