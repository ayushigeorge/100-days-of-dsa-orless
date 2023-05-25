class Solution
{
    public:
    int josephus(int n, int k)
    {
       //Your code here
       if(n==1){
           return 1;
       }
       int x=(josephus(n-1,k)+k)%n;
       if(x==0){
           return n;
       }
       return x;
    }
};
