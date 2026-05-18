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
    void reorderList(ListNode* head) {
        ListNode *slow=head,*fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *prev=NULL,*curr=slow->next,*next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        slow->next=NULL;
        ListNode *front=head;
        while(prev!=NULL){
            ListNode *firsthalf=front->next,*secondhalf=prev->next;
            front->next=prev;
            prev->next=firsthalf;
            front=firsthalf;
            prev=secondhalf;
        }
    }
};