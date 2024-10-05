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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        // brute force
        vector<int>ans;
        ListNode* temp=head;
        while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int l=left-1 , r=right-1;
        while(l<r){
            swap(ans[l] , ans[r]);
            l++;
            r--;
        }
        temp=head;
        for(int&num:ans){
            temp->val=num;
            temp=temp->next;
        }
        return head;
    }
};