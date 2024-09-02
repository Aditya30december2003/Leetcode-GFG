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
        ListNode *fast=head , *slow=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast && !fast->next)
        slow=slow->next;

        //slow is the mid now
        //reverse the other half
        ListNode *prev=NULL;
        while(slow && slow->next){
         ListNode *temp=slow->next;
         slow->next=prev;
         prev=slow;
         slow=temp;
        }
        if(slow) slow->next=prev;
        fast=head;
        while(fast && slow){
            if(fast->val != slow->val)
            return false;

            fast=fast->next;
            slow=slow->next;
        }
      return true;
    }
};