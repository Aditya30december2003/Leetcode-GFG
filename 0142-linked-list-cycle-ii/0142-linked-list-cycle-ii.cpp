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
bool check(vector<ListNode*>&visited , ListNode *current){
    for(int i=0;i<visited.size();i++){
        if(visited[i]==current){
            return true;
        }
    }
    return 0;
}
public:
    ListNode *detectCycle(ListNode *head) {
       vector<ListNode*> visited;
       ListNode *current=head;
       while(current!=NULL){
        if(check(visited , current)){
         return current;
        }
        visited.push_back(current);
        current=current->next;
       } 
       return NULL;
    }
};