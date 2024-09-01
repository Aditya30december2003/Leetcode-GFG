/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
   bool check(vector<ListNode*>&visited , ListNode* target){
    for(int i=0;i<visited.size();i++){
        if(visited[i] == target)
        return true;
    }
    return false;
   }
public:
    bool hasCycle(ListNode *head) {
        vector<ListNode*>visited;
        ListNode *current=head;
        while(current){
            if(check(visited , current)){
                return true;
            }
            visited.push_back(current);
            current=current->next;
        }
        return false;
    }
};