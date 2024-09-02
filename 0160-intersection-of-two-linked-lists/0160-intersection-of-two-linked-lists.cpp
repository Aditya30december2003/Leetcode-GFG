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
        unordered_set<ListNode*>set;
        ListNode *tempA=headA , *tempB = headB;
        while(tempA){
            set.insert(tempA);
            tempA=tempA->next;
        }

        while(tempB){
            if(set.find(tempB) != set.end())
            return tempB;

            tempB=tempB->next;
        }
        return NULL;
    }
};