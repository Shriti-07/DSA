/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(head == nullptr) return head;
        Node* curr=head;
        while(curr != nullptr){
            if(curr->child != nullptr){
                Node* nextNode=curr->next;
                Node* child=curr->child;

                curr->next=child;
                child->prev=curr;
                curr->child=nullptr;

                Node* tail=child;
                while(tail->next != nullptr){
                    tail=tail->next;
                }
                if(nextNode != nullptr){
                    tail->next=nextNode;
                    nextNode->prev=tail;
                }
            }
            curr=curr->next;
        }
        return head;
    }
};