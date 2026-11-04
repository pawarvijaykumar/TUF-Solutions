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
    ListNode* deleteTail(ListNode* head) {

        // Case 1: Empty list
        if (head == NULL) {
            return NULL;
        }

        // Case 2: Only one node
        if (head->next == NULL) {
            delete head;
            return NULL;
        }

        // Case 3: Multiple nodes
        ListNode* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->prev->next = NULL;

        delete temp;

        return head;
    }
};