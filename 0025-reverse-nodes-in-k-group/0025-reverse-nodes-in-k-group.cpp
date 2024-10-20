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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        int count=0;
        while(temp && count<k){
         temp=temp->next;
         count++;
        }
        if(k==count){
            ListNode *prev=NULL , *curr=head , *future=NULL;
            int i=0;
            while(curr && i<k){
                future=curr->next;
                curr->next=prev;
                prev=curr;
                curr=future;
                i++;
            }
            if(future){
                head->next=reverseKGroup(future, k);
            }
            return prev;
        }
        return head;
    }
};