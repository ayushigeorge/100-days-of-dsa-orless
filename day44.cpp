class Solution{
public:
int maxIndexDiff(int A[], int N) 
    { 
        // Your code here
        int lmin[N], rmax[N];
        lmin[0]=A[0];
        rmax[N-1]=A[N-1];
        
        for(int i=1; i<N; ++i) {
            lmin[i]=min(A[i],lmin[i-1]);
        }
        for(int i=N-2; i>-1; --i) {
            rmax[i]=max(A[i],rmax[i+1]);
        }
        
        int ans=0,i=0,j=0;
        
        while(i<N and j<N) {
            if(lmin[i]<=rmax[j]) {
                ans=max(ans,j-i);
                j++;
            }
            else {
                i++;
            }
        }
        return ans;
    }
};
