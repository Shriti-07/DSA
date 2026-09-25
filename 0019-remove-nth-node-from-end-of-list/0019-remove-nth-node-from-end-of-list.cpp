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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int count=0;
        while(temp !=nullptr){
            count++;
            temp=temp->next;
        }
        int c=count-n+1;
        temp= head;
        if(c==1){
                head=temp->next;
                delete temp;
                return head;
            }
        ListNode* prev=nullptr;
        count=0;
        while(temp != nullptr){
            count++;
            if(count==c){
                prev->next=temp->next;
                delete temp;
                return head;
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
    }
};