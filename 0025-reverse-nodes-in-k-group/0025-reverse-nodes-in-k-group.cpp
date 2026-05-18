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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp=head,*prevpart=NULL;
    while(temp!=NULL){
        ListNode *iterator=temp;
            int count=1;
        while(count<k && iterator!=NULL){
            iterator=iterator->next;
            count++;
        }
        if(iterator==NULL){
            if(prevpart!=NULL){
                prevpart->next=temp;
            }
            break;
        }
        ListNode *nextpart=iterator->next;
        iterator->next=NULL;
        ListNode *prev=NULL,*curr=temp,*next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        if(temp==head){
            head=iterator;
        }
        else{
            prevpart->next=iterator;
        }
        prevpart=temp;
        temp=nextpart;
    }
        return head;
    }
};