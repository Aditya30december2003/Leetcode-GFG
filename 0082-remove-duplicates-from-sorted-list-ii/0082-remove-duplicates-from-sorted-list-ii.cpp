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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int , int>umap;
        ListNode* temp=head;
        while(temp){
            umap[temp->val]++;
            temp=temp->next;
        }

        ListNode* ans=new ListNode(-1);
        ListNode* tem=ans;
        
        for(auto&x:umap){
            if(x.second==1){
            tem->next=new ListNode(x.first);
            tem=tem->next;
            }
        }
        return ans->next;
    } 
};