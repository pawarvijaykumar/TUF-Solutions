/*
class ListNode {
public:
    int data;
    ListNode* prev;
    ListNode* next;

    ListNode(int val) : data(val), prev(nullptr), next(nullptr) {}
};
*/

class Solution {
public:
    ListNode* reverseDLL(ListNode* head) {

        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;

        while (curr != NULL) {

            next = curr->next;

            curr->next = curr->prev;

            curr->prev = next;

            prev = curr;

            curr = next;
        }

        return prev;
    }
};