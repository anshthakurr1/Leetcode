/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    struct ListNode *slow=head;
    struct ListNode *fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    struct ListNode*prev=NULL;
    while(slow!=NULL)
    {
        struct ListNode *temp=slow->next;
        slow->next=prev;
        prev=slow;
        slow=temp; 
    }
    while(prev!=NULL)
    {
        if(head->val!=prev->val)
        {
            return false;
        }
        head=head->next;
        prev=prev->next;
    }
    return true;
}