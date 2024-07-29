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
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode *temp=head;
        int size=0;
        vector<int>arr;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
            size++;
        }
        k=k%size;
        int start=size-k;
        temp=head;
        for(int i=start;i<size;i++){
            temp->val=arr[i];
            temp=temp->next;
        }
        for(int i=0;i<start;i++){
            temp->val=arr[i];
            temp=temp->next;
        }
        return head;
    }
};