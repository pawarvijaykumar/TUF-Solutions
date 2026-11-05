/**
class ListNode
{
 * Definition for doubly-linked list.
 *  public:
 *      int data;
 *      ListNode *prev;
 *      ListNode *next;
 *      ListNode() : data(0), prev(nullptr), next(nullptr) {}
 *      ListNode(int x) : data(x), prev(nullptr), next(nullptr) {}
 *      ListNode(int x, ListNode *prev, ListNode *next) : data(x), prev(prev), next(next) {}
};
*/

class Solution {
public:
    ListNode *deleteKthElement(ListNode *&head, int k) {

        // Step 1: Check empty list
        if (head == NULL) {
            return NULL;
        }

        // Step 2: Traverse to kth node
        ListNode* curr = head;
        int count = 1;

        while (curr != NULL && count < k) {
            curr = curr->next;
            count++;
        }

        // Step 3: Check if node exists
        if (curr == NULL) {
            return head;
        }

        // Step 4: Update previous node
        if (curr->prev != NULL) {
            curr->prev->next = curr->next;
        }
        else {
            head = curr->next;
        }

        // Step 5: Update next node
        if (curr->next != NULL) {
            curr->next->prev = curr->prev;
        }

        // Step 6: Delete node
        delete curr;

        return head;
    }
};