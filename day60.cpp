class Solution
{
    public:
   
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here..
        stack<int>temp_sk;
        for(int i=0; i<(sizeOfStack>>1); i++){
            temp_sk.push(s.top());
            s.pop();
        }
        s.pop();
        while(!temp_sk.empty()){
            s.push(temp_sk.top());
                temp_sk.pop();
            
        }
    }
};
