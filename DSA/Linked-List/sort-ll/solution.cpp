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

    // Merge two sorted linked lists
    ListNode* merge(ListNode* list1, ListNode* list2) {

        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;

        while (list1 != nullptr && list2 != nullptr) {

            if (list1->val <= list2->val) {
                temp->next = list1;
                list1 = list1->next;
            }
            else {
                temp->next = list2;
                list2 = list2->next;
            }

            temp = temp->next;
        }

        if (list1 != nullptr) {
            temp->next = list1;
        }
        else {
            temp->next = list2;
        }

        return dummy->next;
    }

    // Merge Sort
    ListNode* sortList(ListNode* head) {

        // Base condition
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        // Find middle using slow and fast pointers
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        while (fast != nullptr && fast->next != nullptr) {

            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // Split into two halves
        prev->next = nullptr;

        // Recursively sort both halves
        ListNode* left = sortList(head);
        ListNode* right = sortList(slow);

        // Merge both sorted halves
        return merge(left, right);
    }
};
