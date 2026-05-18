/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *temp=new Node(0);
        Node *copy=temp;
        Node *temp1=head;
        map<Node *,Node *> A;
        while(temp1!=NULL){
            Node *newNode=new Node(temp1->val);
            A[temp1]=newNode;
            copy->next=newNode;
            copy=newNode;
            temp1=temp1->next;
        }
        Node *original=head;
        Node *copy1=temp->next;
        while(original!=NULL){
            copy1->random=A[original->random];
            original=original->next;
            copy1=copy1->next;
        }
        return temp->next;
    }
};