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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int , ListNode*> , vector<pair<int , ListNode*>> , greater<pair<int , ListNode*>>>q;
        for(int i=0;i<lists.size();i++){
            if(lists[i]){
              q.push({lists[i]->val , lists[i]});
            }
        }

        ListNode* ans=new ListNode(-1);
        ListNode* temp=ans;
        while(!q.empty()){
            auto it=q.top();
            q.pop();
            if(it.second->next){
                q.push({it.second->next->val , it.second->next});
            }
            temp->next=new ListNode(it.first);
            temp=temp->next;
        }
        return ans->next;
    }
};