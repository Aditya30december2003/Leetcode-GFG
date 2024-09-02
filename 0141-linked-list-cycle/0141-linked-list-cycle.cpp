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
    bool check(ListNode *temp , vector<ListNode*>&visited){
        for(int i=0;i<visited.size();i++){
            if(visited[i] == temp)
            return 1;
        }
        return 0;
    }
    bool hasCycle(ListNode *head) {
        vector<ListNode*>visited;
        ListNode *temp=head;
        while(temp){
            if(check(temp , visited))
            return 1;
            
            visited.push_back(temp);
            temp=temp->next;
        }
    return 0;
    }
};