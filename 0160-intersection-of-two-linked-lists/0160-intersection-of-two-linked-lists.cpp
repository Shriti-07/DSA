/* class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) return nullptr;
        
        ListNode *a = headA;
        ListNode *b = headB;
        
        while (a!=b) {
            a=(a==nullptr)?headB:a->next;
            b=(b==nullptr)?headA:b->next;
        }
        
        return a;
    }
}; */


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> visited;
        
        while (headA) {
            visited.insert(headA);
            headA = headA->next;
        }
        
        while (headB) {
            if (visited.count(headB)) return headB;
            headB = headB->next;
        }
        
        return nullptr;
    }
};

