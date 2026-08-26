class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {

        int left = 0;
        int ones = 0;

        string ans = "";

        for (int right = 0; right < s.length(); right++) {

            // Add s[right] to our window
            if (s[right] == '1') {
                ones++;
            }

            // We have exactly k ones
            if (ones == k) {

                // Remove unnecessary zeros from the left
                while (left <= right && s[left] == '0') {
                    left++;
                }

                string current = s.substr(left, right - left + 1);

                // Update answer
                if (ans == "" ||
                    current.length() < ans.length() ||
                    (current.length() == ans.length() && current < ans)) {

                    ans = current;
                }

                // Move left past the first 1
                if (s[left] == '1') {
                    ones--;
                    left++;
                }
            }
        }

        return ans;
    }
};