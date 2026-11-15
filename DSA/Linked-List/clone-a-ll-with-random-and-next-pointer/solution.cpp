
class Solution {
public:
    ListNode* copyRandomList(ListNode* head) {

        if (head == nullptr) {
            return nullptr;
        }

        // Step 1: Create copied nodes
        ListNode* curr = head;

        while (curr != nullptr) {

            ListNode* copy = new ListNode(curr->val);

            copy->next = curr->next;
            curr->next = copy;

            curr = copy->next;
        }

        // Step 2: Connect random pointers
        curr = head;

        while (curr != nullptr) {

            if (curr->random != nullptr) {
                curr->next->random = curr->random->next;
            }

            curr = curr->next->next;
        }

        // Step 3: Separate original and copied lists
        curr = head;

        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        while (curr != nullptr) {

            ListNode* copy = curr->next;

            curr->next = copy->next;

            temp->next = copy;
            temp = copy;

            curr = curr->next;
        }

        return dummy->next;
    }
};
