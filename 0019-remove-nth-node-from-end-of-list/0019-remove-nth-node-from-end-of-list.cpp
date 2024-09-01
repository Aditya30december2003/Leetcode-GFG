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
        while(temp)
        {
            temp=temp->next;
            count++;
        }
        int index = count-n;
        // if starting is to be deleted
        if (index == 0) {
            ListNode* toDelete = head;
            head = head->next;
            delete toDelete;
            return head;
        }


         ListNode *prev=NULL;
         temp=head;
         while(index--){
         prev=temp;
         temp=temp->next;
         }
         prev->next = temp->next;
         delete temp;
         return head;

    }
};