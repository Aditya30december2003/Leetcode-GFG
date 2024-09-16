/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*>s;
        ListNode* tempA=headA , *tempB=headB;

        while(tempA){
            s.insert(tempA);
            tempA=tempA->next;
        }

        while(tempB){
            if(s.find(tempB)!=s.end())
            return tempB;
            else
            tempB=tempB->next;
        }
        return NULL;
    }
};