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
    ListNode* deleteHead(ListNode* head) {

        // Empty linked list
        if (head == NULL) {
            return NULL;
        }

        // Store old head
        ListNode* temp = head;

        // Move head forward
        head = head->next;

        // Update new head's prev
        if (head != NULL) {
            head->prev = NULL;
        }

        // Delete old head
        delete temp;

        return head;
    }
};
