vector<int> findSpiral(Node *root)
{
    //Your code here
    int r=1;
    vector<int>ans;
    dequeue<Node*>q;
    q.push_back(root);
    while(!q.empty()){
        int sz=q.size();
        while(sz--){
            Node *curr;
            if(rev){
                curr= q.back();
                q.pop_back();
                if(curr->right) q.push_front(curr->right);
                if(curr-> left) q.push_front(curr->left);
            }
            else{
                curr= q.front(); q.pop_front();
                if(curr->left) q.push_back(curr->left);
                if(curr->right) q.push_back(curr->right);
            }
            ans.push_back(curr->data);
            
        }
        rev=!rev;
    }
    return ans;
}
