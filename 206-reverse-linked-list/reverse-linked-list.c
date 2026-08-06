/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode*prev,*ptr=head;
    prev=NULL;
    while(ptr!=NULL)
    {
        struct ListNode *temp=ptr->next;
        ptr->next=prev;
        prev=ptr;
        ptr=temp;
    }
    return prev;
    
}