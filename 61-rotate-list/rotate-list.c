/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    int len=1;
    struct ListNode *ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
        len++;
    }

    k=k%len;

    if(k==0)
    {
        return head;
    }
    for(int i=0;i<k;i++)
    {
        ptr=head;

        while(ptr->next->next!=NULL)
        {
            ptr=ptr->next;
        }
        struct ListNode*temp=ptr->next;
        temp->next=head;
        head=temp;
        ptr->next=NULL;
    }
    return head;
}