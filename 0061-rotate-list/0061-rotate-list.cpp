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
    ListNode* rotateRight(ListNode* head, int k) {
        // make the ll a circular ll
        if(!head || !head->next || k==0) return head;
        ListNode*temp=head;
        int count=1;
        while(temp->next){
            temp=temp->next;
            count++;
        }
        temp->next=head;
        k=k%count;
        int newIdx=count-k;
        temp=head;
        while(--newIdx){
        temp=temp->next;
        }
        ListNode* newHead=temp->next;
        temp->next=NULL;

        return newHead;

    }
};