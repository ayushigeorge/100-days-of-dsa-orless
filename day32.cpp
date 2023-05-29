// Function to insert a node in a BST.
Node* insert(Node* root, int Key) {
    // Your code here
    Node *head=root;
    Node *prev=NULL;
    while(root!=NULL){
        prev=root;
        if(root->data == key) return head;
        else if(key>root->data) root=root->right;
        else if(key<root->data) root= root->left;
        
    }
    Node *n= new Node(key);
    if(prev->data>key)
    prev->left= n;
    else
    prev->right= n;
    return head;
}
