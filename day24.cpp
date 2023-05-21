vector<int> leftView(Node *root)
{
   // Your code here
   if(root==NULL){
       return { };
   }
   vector<int>res;
   queue<pair<Node*,int>>q;
   q.push({root,0});
   int i=0;
   while(q.empty()==false){
       if(q.front().second==i){
           res.push_back(q.front().first->data);
           i++;
       }
       if(q.front().first->left!=NULL){
           q.push({q.front().first->left,q.front().second+1});
       }
       if(q.front().first->right!=NULL){
           q.push({q.front().first->right,q.front().second+1});
       }
       q.pop();
   }
   return res;
}
