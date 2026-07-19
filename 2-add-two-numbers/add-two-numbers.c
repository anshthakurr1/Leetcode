/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    
    struct ListNode dummy;
    dummy.val = 0;
    dummy.next = NULL;

    struct ListNode *ptr = &dummy;
    int carry = 0;

    while (l1 != NULL || l2 != NULL) {

        int sum = carry;

        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum / 10;
        sum = sum % 10;

        struct ListNode *newNode =
            (struct ListNode *)malloc(sizeof(struct ListNode));

        newNode->val = sum;
        newNode->next = NULL;

        ptr->next = newNode;
        ptr = ptr->next;
    }

    if (carry) {
        struct ListNode *newNode =
            (struct ListNode *)malloc(sizeof(struct ListNode));

        newNode->val = carry;
        newNode->next = NULL;

        ptr->next = newNode;
    }

    return dummy.next;
}