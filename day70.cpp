void findNode(Node* root, int k, int node, int & count, int & ans, bool &match){
    if(root==NULL) return;
    if(root->data == node){
        match =true;
        return;
    }
    if(!match){
        findNode(root->left, k, node, count, ans, match);
    }
    if(!match){
        findNode(root->right, k, node, count, ans, match);
    }
    if(match){
        count++;
        if(count== k){
            ans= root->data;
        }
    }
}
int kthAncestor(Node *root, int k, int node)
{
    // Code here
    int count=0;
    int ans=-1;
    bool match= false;
    findNode(root, k, node, count, ans, match);
    return ans;
}
