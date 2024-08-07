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
    bool isPalindrome(ListNode* head) {
        if(head==NULL){
            return false;
        }
        else if(head->next==NULL){
            return true;
        }
        vector<int>arr;
        ListNode *temp=head;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int start=0 , end=arr.size()-1;
        while(start<=end){
            if(arr[start]!=arr[end]){
                return false;
                break;
            }
            start++;
            end--;
        }
        return true;
    }
};