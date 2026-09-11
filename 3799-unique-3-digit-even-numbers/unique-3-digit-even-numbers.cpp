class Solution {
public:

    unordered_set<int> st;

    void solve(vector<int>& digits, vector<bool>& used, int num, int count) {

        if(count == 3) {
            st.insert(num);
            return;
        }

        for(int i = 0; i < digits.size(); i++) {

            if(used[i])
                continue;

            if(count == 0 && digits[i] == 0)
                continue;

            if(count == 2 && digits[i] % 2 != 0)
                continue;

            used[i] = true;

            solve(digits, used, num * 10 + digits[i], count + 1);

            used[i] = false;
        }
    }

    int totalNumbers(vector<int>& digits) {

        vector<bool> used(digits.size(), false);

        solve(digits, used, 0, 0);

        return st.size();
    }
};