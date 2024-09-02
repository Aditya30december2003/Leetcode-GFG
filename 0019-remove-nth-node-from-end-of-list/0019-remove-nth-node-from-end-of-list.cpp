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
        ListNode* temp=head;
        int count=0;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        count=count-n;
        if(count==0){
            ListNode*temp2=head;
            head=head->next;
            delete temp2;
            return head;
        }
        
        ListNode *prev=NULL;
        ListNode *curr=head;
        while(count--){
            prev=curr;
            curr=curr->next;
        }
        ListNode *temp2=curr;
        prev->next=curr->next;
        delete temp2;

        return head;

    }
};