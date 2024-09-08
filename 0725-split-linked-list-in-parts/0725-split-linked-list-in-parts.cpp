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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>ans(k , NULL);
        int count=0;
        ListNode *temp=head;

        while(temp){
            count++;
            temp=temp->next;
        }

        int partSize = count / k;
        int extraParts = count % k;


        temp=head;
        for (int i = 0; i < k && temp; ++i) {
            ListNode* partHead = temp;
            int currentPartSize = partSize + (i < extraParts ? 1 : 0);
            
            // Move to the end of the current part
            for (int j = 1; j < currentPartSize; ++j) {
                temp = temp->next;
            }
            
            // Split the list
            ListNode* nextPartHead = temp->next;
            temp->next = nullptr;
            temp = nextPartHead;
            
            ans[i] = partHead;
        }

        return ans;
    }
};