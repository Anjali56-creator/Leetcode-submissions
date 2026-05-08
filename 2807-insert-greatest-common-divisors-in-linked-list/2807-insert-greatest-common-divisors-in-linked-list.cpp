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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp=head;
        while(temp && temp->next){
            int hcf=__gcd(temp->val,temp->next->val);
            ListNode* newnode=new ListNode (hcf);
            newnode->next=temp->next;
            temp->next=newnode;
            temp=newnode->next;
        }
        return head;
    }
};