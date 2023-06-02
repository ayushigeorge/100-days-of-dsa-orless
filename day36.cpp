class Solution{
    public:
    vector<pair<int,int>> allPairs(int a[], int b[], int n, int m, int x)
    {
        // Your code goes here  
        vector<pair<int, int>>v;
        sort(a,a+n);
        sort(b,b+m);
        for(int i=0; i<n; i++){
            int key= x-a[i];
            int flag=0;
            int y=0; 
            int l=0;
            int h= m-1;
            while(l<=h){
                int mid;
                mid= (l+h)/2;
                if(b[mid]==key){
                    flag=1;
                    y=b[mid];
                    break;
                }
                else if(b[mid]>key)
                h=mid-1;
                else
                l=mid+1;
            }
            if(flag==1) v.push_back({a[i], y});
        }
        return v;
    }
};
