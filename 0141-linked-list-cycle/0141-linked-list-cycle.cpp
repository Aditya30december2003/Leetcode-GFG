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
bool check(vector<ListNode*> &visited , ListNode *current){
    for(int i=0;i<visited.size();i++){
        if(visited[i]==current){
            return 1;
        }
    }
    return 0;
}
public:
    bool hasCycle(ListNode *head) {
        vector<ListNode*> visited;
        ListNode *current=head;
        while(current!=NULL){
            if(check(visited , current)){
                return true;
            }
            visited.push_back(current);
            current=current->next;
        }
        return false;
    }
};