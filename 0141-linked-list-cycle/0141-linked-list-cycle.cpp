/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        int a=0,i=0;
        ListNode *temp=head;
        set<ListNode*> A;
        while(temp!=NULL){
            if(A.find(temp)!=A.end()){
                return 1;
            }
            A.insert(temp);
            temp=temp->next;
        }
        return 0;
    }
};