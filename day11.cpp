class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        if(!head || !head ->next) return head;
        struct Node *temp=head, *forw=head->next, *prev= NULL;
        while(temp){
            temp->next=prev;
            prev=temp;
            temp=forw;
            if(forw)forw= forw->next;
        }
        head=prev;
        return head;
        // return head of reversed list
    }
    
};
