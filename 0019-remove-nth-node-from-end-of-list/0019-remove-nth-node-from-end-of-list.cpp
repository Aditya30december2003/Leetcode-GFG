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
        int count=0;
        ListNode *temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        
        // n=n%count;
        count=count-n;
        //if count is 0
        if(count==0){
           temp = head;
           head=head->next;
           delete temp;
           return head;
        }
        ListNode *prev=NULL;
        ListNode *current = head;
        while(count--){
            prev=current;
            current=current->next;
        }
        prev->next=current->next;
        delete current;
        return head;
    }
};