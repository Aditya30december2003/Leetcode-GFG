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
    ListNode* Mid(ListNode*head){
        ListNode*slow=head , *fast=head;
        while(fast && fast->next&& fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* mergeSortedList(ListNode* p , ListNode* q){
     if(!p)
     return q;
     if(!q)
     return p;
     if(p->val <= q->val)
     {
        p->next = mergeSortedList(p->next , q);
        return p;
     }
     if(q->val < p->val){
        q->next = mergeSortedList(p,q->next);
        return q;
     }

     return NULL;
    }
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* mid = Mid(head);
        ListNode* newhead=mid->next;
        mid->next=NULL;

        ListNode* left_half=sortList(head);
        ListNode* right_half=sortList(newhead);

        return mergeSortedList(left_half , right_half);
    }
};