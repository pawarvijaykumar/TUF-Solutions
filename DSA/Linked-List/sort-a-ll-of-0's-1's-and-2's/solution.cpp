/*
Definition of singly linked list:
class ListNode{
  public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};
*/


         class Solution {
public:
    ListNode* sortList(ListNode* head) {

        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* zeroHead = NULL;
        ListNode* zeroTail = NULL;

        ListNode* oneHead = NULL;
        ListNode* oneTail = NULL;

        ListNode* twoHead = NULL;
        ListNode* twoTail = NULL;

        ListNode* curr = head;

        while (curr != NULL) {

            ListNode* nextNode = curr->next;
            curr->next = NULL;

            if (curr->data == 0) {

                if (zeroHead == NULL) {
                    zeroHead = zeroTail = curr;
                }
                else {
                    zeroTail->next = curr;
                    zeroTail = curr;
                }
            }

            else if (curr->data == 1) {

                if (oneHead == NULL) {
                    oneHead = oneTail = curr;
                }
                else {
                    oneTail->next = curr;
                    oneTail = curr;
                }
            }

            else {

                if (twoHead == NULL) {
                    twoHead = twoTail = curr;
                }
                else {
                    twoTail->next = curr;
                    twoTail = curr;
                }
            }

            curr = nextNode;
        }

        // Connect zero list to one or two list

        if (zeroHead != NULL) {
            zeroTail->next = (oneHead != NULL) ? oneHead : twoHead;
        }

        // Connect one list to two list

        if (oneHead != NULL) {
            oneTail->next = twoHead;
        }

        // Return the correct head

        if (zeroHead != NULL) return zeroHead;

        if (oneHead != NULL) return oneHead;

        return twoHead;
    }
};