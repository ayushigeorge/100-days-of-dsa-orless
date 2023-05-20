class Solution {
    //Function to find the height of a binary tree.
    int height(Node node) 
    {
        // code here 
        if(node ==null)
        return 0;
        
        int id=height(node.left);
        int ir=height(node .right);
        return Math.max(id+1,ir+1);
    }
}

 

