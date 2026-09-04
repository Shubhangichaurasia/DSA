class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int mini = INT_MAX;
            int maxi = INT_MIN;

            int j = 0;
            while (j <= i) {
                maxi = max(maxi, nums[j]);
                j++;
            }

            int l = i;              // <-- important: i, NOT i + 1
            while (l < n) {
                mini = min(mini, nums[l]);
                l++;
            }

            int diff = maxi - mini;

            if (diff <= k)
                return i;
        }

        return -1;
    }
};