/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* partition(struct ListNode* head, int x) {
    if (head == NULL || head->next == NULL)
        return head;

    struct ListNode dummy;
    dummy.next = head;

    struct ListNode *lastSmall = &dummy;
    while (lastSmall->next && lastSmall->next->val < x)
        lastSmall = lastSmall->next;

    struct ListNode *prev = lastSmall;
    struct ListNode *curr = lastSmall->next;

    while (curr != NULL) {
        if (curr->val < x) {
            prev->next = curr->next;      // Remove curr
            curr->next = lastSmall->next; // Insert after lastSmall
            lastSmall->next = curr;
            lastSmall = curr;
            curr = prev->next;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }

    return dummy.next;
}