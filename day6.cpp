class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        if(head->next==NULL)
        return false;
        
        Node*fast=head;
        Node*slow=head;
        
       while(slow!=NULL && fast!=NULL)
       {
           fast=fast->next;
           if(fast!=NULL)
           {
               fast=fast->next;
           }
           slow=slow->next;
           if(fast==slow)
           {
               return true;
           }
       }
        return false;
    }
};
