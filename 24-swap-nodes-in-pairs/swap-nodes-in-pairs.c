/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode dummy;
    dummy.val=-1;
    dummy.next=head;
    struct ListNode *temp=&dummy;
    while(temp->next!=NULL && temp->next->next!=NULL)
    {
        struct ListNode*swap1=temp->next;
        struct ListNode *swap2=temp->next->next;

        swap1->next=swap2->next;
        swap2->next=swap1;

        temp->next=swap2;
        temp=swap1;
    }
    return dummy.next;
}