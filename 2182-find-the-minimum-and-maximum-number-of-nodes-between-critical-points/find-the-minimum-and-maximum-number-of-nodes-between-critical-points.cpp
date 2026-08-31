/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        
        vector<int> ans = {-1, -1};

        if (head == nullptr || head->next == nullptr || 
            head->next->next == nullptr) {
            return ans;
        }

        ListNode* prev = head;
        ListNode* curr = head->next;

        int pos = 2;

        int first = -1;
        int last = -1;

        int minDist = INT_MAX;

        while (curr->next != nullptr) {

            ListNode* next = curr->next;

            // Check whether curr is a critical point
            if ((curr->val > prev->val && curr->val > next->val) ||
                (curr->val < prev->val && curr->val < next->val)) {

                // First critical point
                if (first == -1) {
                    first = pos;
                }
                else {
                    // Distance from previous critical point
                    minDist = min(minDist, pos - last);
                }

                // Current critical point becomes the latest one
                last = pos;
            }

            prev = curr;
            curr = next;
            pos++;
        }

        // Need at least two critical points
        if (first == last) {
            return ans;
        }

        int maxDist = last - first;

        ans[0] = minDist;
        ans[1] = maxDist;

        return ans;
    }
};