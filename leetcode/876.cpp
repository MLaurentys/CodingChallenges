class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *p1 = head, *p2 = head;
        while(true) {
            p2 = p2->next;
            if (p2 == nullptr)
                break;
            p1 = p1->next;
            p2 = p2->next;
            if (p2 == nullptr)
                break;
        }
        return p1;
    }
};