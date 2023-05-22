vector<int>v;

void check(Node* root){
    if(!root)
    return;
        
    if(root->left and !root->right)
    v.push_back(root->left->data);
    
    if (!root->left and root->right)
    v.push_back(root->right->data);
    
    check(root->left);
    check(root->right);
}

vector<int> noSibling(Node* root)
{
    vector<int>ans;
    if(!root || (!root->left and !root->right))
    return ans;
    
    check(root);
    ans = v;
    v.clear();
    if(ans.empty())
    ans.push_back(-1);
    
    sort(ans.begin(),ans.end());
    return ans;
}
