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
    ListNode* insertBeforeTail(ListNode* head, int X) {

        // Step 1: Create new node
        ListNode* newNode = new ListNode(X);

        // Step 2: Check empty list
        if (head == NULL) {
            return newNode;
        }

        // Step 3: Find the tail
        ListNode* tail = head;

        while (tail->next != NULL) {
            tail = tail->next;
        }

        // Step 4: If only one node exists
        if (tail->prev == NULL) {
            newNode->next = tail;
            tail->prev = newNode;
            return newNode;
        }

        // Step 5: Connect new node
        ListNode* prevNode = tail->prev;

        newNode->next = tail;
        newNode->prev = prevNode;

        // Step 6: Update previous and tail
        prevNode->next = newNode;
        tail->prev = newNode;

        return head;
    }
};