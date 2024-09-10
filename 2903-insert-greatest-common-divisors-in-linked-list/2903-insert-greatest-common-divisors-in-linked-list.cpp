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
    int GCD(int num1 , int num2){
        int result = min(num1 , num2);
        while(result>0){
            if(num1 % result == 0 && num2 % result == 0){
                break;
            }
            result--;
        }
        return result;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode*temp=head;
        while(temp && temp->next){
            int gcd=GCD(temp->val , temp->next->val);
            ListNode* insert = new ListNode(gcd);

            ListNode* nextNode = temp->next;  
            temp->next = insert;              
            insert->next = nextNode; 

            temp = nextNode;
        }
        return head;
    }
};