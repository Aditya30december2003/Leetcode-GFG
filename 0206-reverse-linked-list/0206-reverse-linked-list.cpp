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
    ListNode* reverseList(ListNode* head) {
       ListNode *prev = NULL;
       ListNode *curr =head;
       ListNode *future=NULL;
       while(curr!=NULL){
        future = curr->next;
        curr->next=prev;
        prev=curr;
        curr=future;
       }
       head=prev; // curr is on null then prev will be the head
       return head;
    }
};