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
        if (!head || !head->next) return head;
        stack<ListNode*>stk;
        ListNode* temp=head;
        

        while(temp){
            if (!stk.empty() && stk.top()->val == temp->val) {
                // Skip all nodes with the same value
                while (temp && temp->val == stk.top()->val) {
                    temp = temp->next;
                }
                // Remove the top element since it was a duplicate
                stk.pop();
            } else {
                // Only push unique values onto the stack
                stk.push(temp);
                temp = temp->next;
            }
        }
        if(stk.empty())return NULL;

        ListNode *newHead=NULL;
        while(!stk.empty()){
            stk.top()->next=newHead;
            newHead=stk.top();
            stk.pop();
        }
        return newHead;
    }
};