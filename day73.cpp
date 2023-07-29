tructure of the binary Search Tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// your task is to complete the Function
// Function should return median of the BST
void inorder(struct Node *root, vector<int>&arr){
    if(root==NULL) return;
    inorder(root->left,arr);
    arr.push_back(root->data);
    inorder(root->right,arr);
}
float findMedian(struct Node *root)
{
      //Code here traverse then in increasing order then n/2 then its index is the answer
      vector<int >ans;
      if(root==NULL) return 0.0;
      
      inorder(root,ans);
      if(ans.size()%2==0) return (ans[ans.size()/2]+ans[ans.size()/2-1])/2.0;
      else
      return (float) ans[ans.size()/2];
}
