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
    bool hasCycle(ListNode *head) {
        ListNode* temp=head;
        unordered_set<ListNode*>s;
        while(temp){
          if(s.find(temp)!=s.end())
          return true;
          else
          s.insert(temp);
          temp=temp->next;
        }
        return false;
    }
};