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
    ListNode* reverseList(ListNode* head) {
        vector<int> arr;
        ListNode *temp=head;
        //in an array
        while (temp) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        //swap to reverse
        int start =0 , end=arr.size()-1;
        while(start<end){
            swap(arr[start] , arr[end]);
            start++;
            end--;
        }

        // put in the linked list
        temp=head;
        for(int i=0;i<arr.size();i++){
            temp->val=arr[i];
            temp=temp->next;
        }
        return head;

    }
};