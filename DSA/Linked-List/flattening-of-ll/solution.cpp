
class Solution {
public:

    ListNode* merge(ListNode* a, ListNode* b) {

        if (a == nullptr) return b;
        if (b == nullptr) return a;

        ListNode* result;

        if (a->val <= b->val) {
            result = a;
            result->child = merge(a->child, b);
        }
        else {
            result = b;
            result->child = merge(a, b->child);
        }

        result->next = nullptr;

        return result;
    }

    ListNode* flattenLinkedList(ListNode* &head) {

        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        head->next = flattenLinkedList(head->next);

        head = merge(head, head->next);

        return head;
    }
};
