class Solution{
public:
Node * curr=root,*succ=nullptr;
        if(x->right){
            curr=x;
            curr=curr->right;
            while(curr &&curr->left) curr=curr->left;
            return curr;
        }else{
            while(curr){
                if(x->data<curr->data){
                    succ=curr;
                    curr=curr->left;
                }else if ( x->data>curr->data){
                    curr=curr->right;
                }else {
                    break;
                }
            }
            return succ;
        }
        
    }
};
