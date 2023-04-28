class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
       
        Node *tum=head->next;
        Node*mai=head;
        
       if(head->next==NULL) 
       return head->data;
   
        while(tum->next!=NULL&&tum->next->next!=NULL)
        {
           tum=tum->next->next;
           mai=mai->next;
       }
         
       
       return mai->next->data;  
    
    }
};
