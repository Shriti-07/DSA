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

    ListNode* reverseList(ListNode* head){
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* newHead= reverseList(head->next);
        ListNode* front=head->next;
        front->next=head;
        head->next= nullptr;
        return newHead;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        int count=0;
        while(temp!=nullptr){
            count++;
            if(count==k) break;
            temp=temp->next;
        }

        if (temp == nullptr) {
            return head;
        }
        ListNode* nextNode=temp->next;
        temp->next=nullptr;
        ListNode* newHead = reverseList(head);
        head->next = reverseKGroup(nextNode, k);
        return newHead;
    }
};