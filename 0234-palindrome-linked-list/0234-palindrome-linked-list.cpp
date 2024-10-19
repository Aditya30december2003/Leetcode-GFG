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
    ListNode* reverse(ListNode *head){
        ListNode* prev=NULL , *curr=head , *future=NULL;

        while(curr){
           future=curr->next;
           curr->next=prev;
           prev=curr;
           curr=future; 
        }

        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        }

        ListNode* firstHalf=head;
        ListNode* secondHalf=reverse(slow);
        
        ListNode* temp1=firstHalf;
        ListNode* temp2=secondHalf;

        while(temp2){
            if(temp1->val != temp2->val)
            return false;

            temp2=temp2->next;
            temp1=temp1->next;
        }
        return true;
    }
};