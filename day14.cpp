vector<int> findSpiral(Node *root)
{
    vector<int>ans;
    if(root==nullptr) return {};
    queue<Node*>q;
    q.push(root);
    bool f = 1; //for spiral turning
    while(!q.empty())
    {
        if(!f)
        {
            int size = q.size();
            for(int i=0;i<size;++i)
            {
                Node* cur = q.front();
                q.pop();
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
                ans.push_back(cur->data);
            }
        }
        else
        {
            int size = q.size();
            vector<int>rev;
            for(int i=0;i<size;++i)
            {
                Node* cur = q.front();
                q.pop();
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
                rev.push_back(cur->data);
            }
            for(int i=rev.size()-1;i>=0;--i)
            {
                ans.push_back(rev[i]);
            }
        }
        f = !f; //spiral turning
    }
    return ans;
}
