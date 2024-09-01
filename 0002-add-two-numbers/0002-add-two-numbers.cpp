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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans = new ListNode(0);
        ListNode *p=l1 , *q=l2 , *curr=ans;
        int carry=0;
        while(p || q){
            int x = p ? p->val : 0;
            int y = q ? q->val : 0;
            int sum = carry + x + y;
            carry=sum/10;

            curr->next= new ListNode(sum%10);
            curr=curr->next;

            if(p) p=p->next;
            if(q) q=q->next;
        }
        if(carry>0){
            curr->next = new ListNode(carry);
        }
        return ans->next; // because ans 1 index is 0
    }
};