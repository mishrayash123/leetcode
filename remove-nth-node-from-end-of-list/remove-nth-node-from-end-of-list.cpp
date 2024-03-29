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
        int s=0;
        ListNode *st=head,*sy=head,*fg=NULL;
        while(head!=NULL){
            s++;
            head=head->next;
        }
        while(sy!=NULL){
            s--;
            if(s+1==n){
                if(fg==NULL && sy->next==NULL){
                    return NULL;
                }
                if(sy==st){
                    st=sy->next;
                    break;
                }
            fg->next=sy->next;
                break;
            }
            fg=sy;
            sy=sy->next;
        }
       return st; 
    }
};