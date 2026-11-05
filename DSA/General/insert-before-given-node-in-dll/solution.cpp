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
    void insertBeforeGivenNode(ListNode* node, int X) {

        // Create new node
        ListNode* newNode = new ListNode(X);

        // Connect new node
        newNode->next = node;
        newNode->prev = node->prev;

        // Update previous node
        node->prev->next = newNode;

        // Update given node
        node->prev = newNode;
    }
};