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
        ListNode *ans=new ListNode(-1);
        ListNode *temp=ans;

        while(!q.empty()){
            auto x=q.top();
            q.pop();
            if(x.second->next)
              q.push({x.second->next->val , x.second->next});
              
              temp->next=x.second;
              temp=temp->next;
        }
        return ans->next;
    }
};