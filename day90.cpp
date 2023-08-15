class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here
        int o=0; int b=0; int c=0; int d=0;
        for(int i=0; i<n; i++){
            if(a[i]==0){
                b++;
                c=max(c,(b-o));
            }
            else{ d++;
            o++;
            if(b-o<=0){
                b=0;
                o=0;
            }
            else {
                c=max(c,(b-o));
            }
        }
    }
    return d+c;

}
};
