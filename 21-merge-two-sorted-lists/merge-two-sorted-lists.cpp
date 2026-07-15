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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* a = list1;
        ListNode* b = list2;
        ListNode* dummy = new ListNode(-1);
        ListNode* c = dummy;
        while( a != NULL && b != NULL){
            if(a->val < b->val){
                ListNode* n = new ListNode(a->val);
                c->next = n;
                c = n;
                a = a->next;
            }else{
                ListNode* n = new ListNode(b->val);
                c->next = n;
                c = n;
                b = b->next;
            }
        }
        while( a!=NULL){
            ListNode* n = new ListNode(a->val);
                c->next = n;
                c = n;
                a = a->next;
        }
        while( b != NULL){
            ListNode* n = new ListNode(b->val);
                c->next = n;
                c = n;
                b = b->next;
        }
        return dummy->next;

    }
};