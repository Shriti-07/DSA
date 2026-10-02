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
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head;

        // Get total length of linked list
        int length = 0;
        ListNode* curr = head;
        while (curr) {
            length++;
            curr = curr->next;
        }

        ListNode dummy(0);
        dummy.next = head;

        for (int step = 1; step < length; step <<= 1) {
            ListNode* prev = &dummy;
            curr = dummy.next;

            while (curr) {
                ListNode* left = curr;
                ListNode* right = split(left, step);
                curr = split(right, step);

                prev->next = merge(left, right);
                while (prev->next) {
                    prev = prev->next;
                }
            }
        }
        return dummy.next;
    }

private:
    // Splits list after 'step' nodes and returns the head of the second part
    ListNode* split(ListNode* head, int step) {
        for (int i = 1; head && i < step; ++i) {
            head = head->next;
        }
        if (!head) return nullptr;

        ListNode* nextPart = head->next;
        head->next = nullptr;
        return nextPart;
    }

    // Standard 2-pointer merge
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (l1 && l2) {
            if (l1->val < l2->val) {
                tail->next = l1;
                l1 = l1->next;
            } else {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }
        tail->next = l1 ? l1 : l2;
        return dummy.next;
    }
};

/* class Solution {
public:
    ListNode* findMiddle(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* mergeTwoLists(ListNode* list1,ListNode* list2){
        ListNode dummy(-1);
        ListNode* temp=&dummy;
        while(list1!=nullptr && list2!=nullptr){
            if(list1->val < list2->val){
                temp->next=list1;
                temp=list1;
                list1=list1->next;
            }
            else{
                temp->next=list2;
                temp=list2;
                list2=list2->next;
            }
        }
        if(list1) temp->next=list1;
        else temp->next=list2;

        return dummy.next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* middle=findMiddle(head);
        ListNode* right=middle->next;
        middle->next=nullptr;
        ListNode* left=head;

        left=sortList(left);
        right=sortList(right);

        return mergeTwoLists(left,right);
    }
}; */

/* class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> arr;
        ListNode* temp=head;
        while(temp!=nullptr){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        sort(arr.begin(),arr.end());
        temp=head;
        for(int i=0;i<arr.size();i++){
            temp->val=arr[i];
            temp=temp->next;
        }
        return head;
    }
}; */