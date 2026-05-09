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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* curr=head->next,*prev=head;
        int sum=0;
           
            while(curr){
                if(curr->val!=0){
                sum+=curr->val;
                }
                else{
                    prev->next=curr;
                    prev=prev->next;
                    prev->val=sum;
                    sum=0;
                }
                curr=curr->next;
            }
        
        return head->next;
    }
};