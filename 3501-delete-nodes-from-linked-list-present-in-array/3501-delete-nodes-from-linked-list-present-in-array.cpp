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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>s;
        for(int x:nums){
            s.insert(x);
        }

        ListNode* temp=head , *prev=NULL;
        while(temp){
         if(s.find(temp->val) != s.end()){
            //if delete head
            if(prev==NULL){
                ListNode*temp2=head;
                head=head->next;
                temp=temp->next;
                delete temp2;
            }
            else{
            //if delete any node
            ListNode* temp2 = temp;
            prev->next=temp->next;
            temp=temp->next;
            delete temp2;
            }
         }
         else{
         prev=temp;
         temp=temp->next;
         }
        }
        return head;
    }
};