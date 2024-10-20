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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_set<int>s;
        ListNode* ans=new ListNode(-1);
        ListNode* tem=head;
        ListNode* temp=ans;
        while(tem){
            if(s.find(tem->val)==s.end()){
                temp->next=new ListNode(tem->val);
                s.insert(tem->val);
                temp=temp->next;
            }
            tem=tem->next;
        }
        return ans->next;
    }
};