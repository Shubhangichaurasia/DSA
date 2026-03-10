class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //using concept of loop in linked list 
        //fast and slow pointer 

        //start a fast and slow pointer until they meet
        int slow = 0 , fast = 0 ;
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
            } while (slow!=fast);

        //as soon as they meet , move both pointers at same speed until they meet again 
        slow = 0 ;
        while(slow !=fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};