/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
        struct ListNode *ptr1=head;
        struct ListNode dummy;
        dummy.val=0;
        dummy.next=head;
        struct ListNode *ptr2=&dummy;
    while(ptr1!=NULL)
    {
        if(ptr1->next!=NULL && ptr1->val==ptr1->next->val)
        {
            while(ptr1->next!=NULL && ptr1->val==ptr1->next->val)
            {
                ptr1=ptr1->next;
            }
            ptr2->next=ptr1->next;
        }
        else
        {
            ptr2=ptr2->next;
        }
        ptr1=ptr1->next;
    }
    return dummy.next;
    
}