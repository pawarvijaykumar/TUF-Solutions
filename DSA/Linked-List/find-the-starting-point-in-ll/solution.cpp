
class Solution {
public:
    ListNode* findStartingPoint(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head;

        // Step 1: Detect the loop
        while (fast != NULL && fast->next != NULL) {

            slow = slow->next;
            fast = fast->next->next;

            // Step 2: Pointers meet
            if (slow == fast) {

                // Step 3: Reset slow
                slow = head;

                // Step 4: Find starting point
                while (slow != fast) {

                    slow = slow->next;
                    fast = fast->next;
                }

                return slow;
            }
        }

        return NULL;
    }
};
