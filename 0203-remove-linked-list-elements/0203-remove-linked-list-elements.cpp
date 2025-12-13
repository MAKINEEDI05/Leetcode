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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp=head;
        while(head!=NULL){
            if(head->val==val){
                head=head->next;
            }
            else{
                break;
            }
        }
        temp=head;
        while(temp!=NULL && temp->next!=NULL){
            if(temp->next->val==val){
                ListNode *curr=temp->next;
                while(curr!=NULL && curr->val==val){
                    curr=curr->next;
                }
                temp->next=curr;
            }
            temp=temp->next;
        }
        return head;
    }
};