class Solution{
public:
 Node * removeDuplicates( Node *head) 
  unordered_map<int,bool> mp;
        Node* tmp=head;
        while(tmp)
        {
            mp[tmp->data]=true;
            tmp=tmp->next;
        }
        
        Node* dummy=new Node(0);
        tmp=dummy;
        dummy->next=head;
        while(dummy->next!=NULL)
        {
            int key=dummy->next->data;
            if(mp[key]==true)//first appearance so dont't delete it
            {
                dummy=dummy->next;
                mp[key]=false;//markinf first appearance as false
            }
            else
            {
                dummy->next=dummy->next->next;
            }
        }
        return tmp->next;
}
};
