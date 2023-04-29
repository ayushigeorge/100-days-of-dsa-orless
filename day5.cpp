struct Node* hd;

class Solution
{
    public:
       
    void reverse(struct Node* q,struct Node *p){
        
           if(p!=NULL){
               reverse(p,p->next);
               p->next=q;
               
           }
           else{
              hd=q;
           }
          
    }
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        struct Node* p=head;
        struct Node* q=NULL;
        
     reverse(q,p);
     return hd;
    }
    
};
