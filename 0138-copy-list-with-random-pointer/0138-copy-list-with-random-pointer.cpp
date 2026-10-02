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
        Node* temp=head;
        while(temp!=nullptr){
            Node* newNode= new Node(temp->val);
            newNode->next=temp->next;
            temp->next=newNode;

            temp=temp->next->next;
        }
        temp=head;
        while(temp!=nullptr){ 
            Node* newNode=temp->next;
            if(temp->random==nullptr){
                newNode->random=nullptr;
            }
            else{
                newNode->random=temp->random->next;
            }
            temp=temp->next->next;
        }

        Node* dummy=new Node(-1);
        Node* res= dummy;
        temp=head;
        while(temp!=nullptr){
            res->next=temp->next;
            temp->next=temp->next->next;
            res=res->next;
            temp=temp->next;
        }

        return dummy->next;
    }
};

/* class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> mp;
        Node* temp=head;
        while(temp!=nullptr){
            Node* newNode= new Node(temp->val);
            mp[temp]=newNode;
            temp=temp->next;
        }
        temp=head;
        while(temp!=nullptr){
            Node* copynode=mp[temp];
            copynode->next=mp[temp->next];
            copynode->random=mp[temp->random];
            temp=temp->next;
        }
        return mp[head];
    }
}; */