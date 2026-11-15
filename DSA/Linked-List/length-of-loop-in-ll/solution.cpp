/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/


class Solution {
public:
    int findLengthOfLoop(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head;

        // Step 1: Detect loop
        while (fast != NULL && fast->next != NULL) {

            slow = slow->next;
            fast = fast->next->next;

            // Step 2: Loop detected
            if (slow == fast) {

                // Step 3: Count loop length
                int count = 1;

                ListNode* temp = slow->next;

                while (temp != slow) {

                    count++;
                    temp = temp->next;
                }

                return count;
            }
        }

        // No loop
        return 0;
    }
};