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
        ListNode *ans=new ListNode(0);
        ListNode* temp1=l1 , *temp2=l2;
        int carry=0;
        ListNode*curr=ans;
        while(temp1 || temp2){
            int x=temp1?temp1->val:0;
            int y=temp2?temp2->val:0;

            int sum=carry+x+y;
            carry=sum/10;
            curr->next=new ListNode(sum%10);
            curr=curr->next;

            if(temp1) temp1=temp1->next;
            if(temp2) temp2=temp2->next;

        }

        if(carry>0){
            curr->next=new ListNode(carry);
        }
        return ans->next;
    }
};