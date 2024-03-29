/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *curr=head;
        while(curr!=NULL){
            if(head->next==NULL){
                return 0;  
            }
            curr->val=100001;
            curr=curr->next;
            if (curr->next==NULL){
                return 0;
            }
            if(curr->val==100001){
                return 1;
            }  
        }
        return 0;
    }
};