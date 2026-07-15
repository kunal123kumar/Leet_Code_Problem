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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int>nums;
        ListNode* temp = head;
        while(temp != NULL){
            nums.push_back(temp->val);
            temp = temp->next;
        }
        int j = 1;
        for( int i = nums.size()-1;i >= 0;i--){
            if(j==n){
                nums[i]=-1;
                break;
            }
            j++;
        }
        ListNode* dummy = new ListNode(-1);
        ListNode* t = dummy;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==-1){
                continue;
            }
            ListNode *s = new ListNode(nums[i]);
            t ->next = s;
            t = s;
        }
        return dummy->next;
    }
};