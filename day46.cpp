
class Solution{
  public:
    //Function to check whether the list is palindrome.
    void insert(Node *& head, int val){
        Node * temp= new Node(val);
        temp-> next=head;
        head = temp;
    }
    Node *reverseLL (Node * head){
        Node * temp;
        while(head!=NULL){
            insert(temp, head->data);
            head=head->next;
        }
        return temp;
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node *temp = reverseLL(head);
        while(head!=NULL){
            if(head->data !=temp ->data)
            return false;
            head= head->next;
            temp= temp->next;
            
        }
        return true;
    }
    };
