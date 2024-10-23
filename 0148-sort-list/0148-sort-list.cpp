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
    ListNode* merge(ListNode* l1 , ListNode* l2){
        if(!l1 && !l2)return NULL;
        if(!l1)return l2;
        if(!l2)return l1;

        if(l1->val < l2->val){
            l1->next=merge(l1->next , l2);
            return l1;
        }
        else{
            l2->next=merge(l1 , l2->next);
            return l2;
        }
    }
    ListNode *getMid(ListNode* head){
        if(!head || !head->next)return head;
        ListNode* slow=head , *fast=head->next;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* mid=getMid(head);
        ListNode* newHead=mid->next;
        mid->next=NULL;

        ListNode* leftSort=sortList(head);
        ListNode* rightSort=sortList(newHead);

        return merge(leftSort , rightSort);
    }
};