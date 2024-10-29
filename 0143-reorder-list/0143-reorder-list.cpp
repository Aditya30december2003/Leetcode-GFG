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
    void reorderList(ListNode* head) {
     ListNode* temp=head;
     vector<int>arr;
     while(temp){
        arr.push_back(temp->val);
        temp=temp->next;
     }   
     temp=head;
     int s=0 , e=arr.size()-1;
     while(s<=e){
     if(s==e){
     temp->val=arr[s];
     temp=temp->next;
     }
     else{
     temp->val=arr[s];
     temp=temp->next;
     temp->val=arr[e];
     temp=temp->next;
     }        
     s++;
     e--;
     }

    }
};