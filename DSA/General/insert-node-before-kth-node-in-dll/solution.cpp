class Solution {
public:
    ListNode* insertBeforeKthPosition(ListNode* head, int X, int K) {

        ListNode* newNode = new ListNode(X);

        // Insert before head
        if (K == 1) {
            newNode->next = head;

            if (head != NULL) {
                head->prev = newNode;
            }

            return newNode;
        }

        // Find kth node
        ListNode* curr = head;
        int count = 1;

        while (curr != NULL && count < K) {
            curr = curr->next;
            count++;
        }

        if (curr == NULL) {
            delete newNode;
            return head;
        }

        // Insert before kth node
        newNode->next = curr;
        newNode->prev = curr->prev;

        curr->prev->next = newNode;
        curr->prev = newNode;

        return head;
    }
};