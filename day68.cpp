class Solution
{
    public:
    
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> ans;
       if(root==NULL) return ans;
       queue<Node *>q;
       q.push(root);
       while(!q.empty()){
           Node *Nodetemp= NULL;
           int n=q.size();
           for(int i=0; i<n;i++){
               Node* temp= q.front();
               q.pop();
               Nodetemp= temp;
               if(temp->left!=NULL){
                   q.push(temp->left);
                   
               }
               if(temp->right!=NULL){
                   q.push(temp->right);
               }
           }
           ans.push_back(Nodetemp->data);
       }
       return ans;
       
    }
};
