class Solution{
    public:
       void solve(Node*root ,int n1,int n2, Node*ans)
        {
            // code here
            if(!root) return;
            else if(root->data ==n1 || root->data==n2){
                ans=root;
                return;
            }
            else if(root->data <n1 && root->data <n2){
                solve(root->right, n1,n2,ans);
                
            }
            else if(root->data>n1&& root->data >n2){
                solve(root->left,n1,n2,ans);
            }
            else{
                ans=root;
                return;
            }
        }
        Node* LCA(Node *root, int n1, int n2){
            Node* ans= root;
            solve(root,n1,n2,ans);
        }

};
