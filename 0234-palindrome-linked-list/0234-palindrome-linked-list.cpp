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
    ListNode *reverse(ListNode *head){
        ListNode *prev=NULL , *curr=head;
        while(curr){
            ListNode* future=curr->next;
            curr->next=prev;
            prev=curr;
            curr=future;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

        ListNode *slow=head , *prev=NULL , *fast=head;
        while(fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        // prev->next=NULL;
        ListNode* newHead=reverse(slow);
        
        ListNode *currOld=head;
        ListNode *currNew=newHead;

        while(currNew){
            if(currNew->val != currOld->val)
            return false;

            currNew=currNew->next;
            currOld=currOld->next;
        }
        return true;
    }
};