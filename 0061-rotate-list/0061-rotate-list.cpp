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
        if(head==NULL || head->next==NULL){
            return head;
        }
        int count = 0;
        ListNode *temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
         temp=head;
         vector<int>arr;
         for(int i=0;i<count;i++){
            arr.push_back(temp->val);
            temp=temp->next;
         }
         k=k%count;
         int breaker=count-k;
         temp=head;
         for(int i=breaker;i<count;i++){
            temp->val=arr[i];
            temp=temp->next;
         }
         for(int i=0;i<breaker;i++){
            temp->val=arr[i];
            temp=temp->next;
         }
    return head;
    }
};