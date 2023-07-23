class Solution{
public:

Node*temp=head;
        int zero=0,one=0,two=0;
        while(temp!=0){
            if(temp->data==0){
                zero++;
            }
            else if(temp->data==1){
                one++;
            }
            else{
                two++;
            }
            temp=temp->next;
        }
        temp=head;
        for(int i=0;i<(one+zero+two);i++)
        {
            if(i<zero)
            {
                temp->data=0;
            }
            else if(i<(one+zero)) {
                temp->data=1;
            }
            else {
                temp->data=2;
            }
           temp=temp->next; 
        }
       return head;
        
        
    }
};
