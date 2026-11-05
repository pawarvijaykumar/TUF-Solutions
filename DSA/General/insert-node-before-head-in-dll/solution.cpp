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
    ListNode* insertBeforeHead(ListNode* head, int X) {

        // Create new node
        ListNode* newNode = new ListNode(X);

        // Connect new node to old head
        newNode->next = head;

        // Update old head's prev
        if (head != NULL) {
            head->prev = newNode;
        }

        // Update head
        head = newNode;

        return head;
    }
};