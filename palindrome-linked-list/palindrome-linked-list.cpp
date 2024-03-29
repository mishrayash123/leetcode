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
    bool isPalindrome(ListNode* head) {
        vector<int>v;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        
       int flag = 0;
 
   int n=v.size();
    for (int i = 0; i <= n / 2 && n != 0; i++) {
        if (v[i] != v[n - i - 1]) {
            flag = 1;
            break;
        }
    }
 
    if (flag == 1)
        return 0;
    else
        return 1;   
    }
};