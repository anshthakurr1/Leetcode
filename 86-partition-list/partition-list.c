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
    struct ListNode largeDummy;
    largeDummy.next=NULL;
    struct ListNode smallDummy;
    smallDummy.next=NULL;
    struct ListNode *large=&largeDummy;
    struct ListNode *small=&smallDummy;
    while(head!=NULL)
    {
        if(head->val<x)
        {
            small->next=head;
            small=small->next;
        }
        else
        {
            large->next=head;
            large=large->next;
        }
        head=head->next;
    }
    large->next=NULL;
    small->next=largeDummy.next;
    
    return smallDummy.next; 
}