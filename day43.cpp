  
class Solution{
  public:
  // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n==1) return 1;
        int s=0; for(int i=0; i<n; i++){
            s=s+a[i];
        }
        int val=s;
        int sum=0;
        for(int i=0; i<n-1; i++){
            sum=sum+a[i];
            if(val-sum-a[i+1]==sum){
                return i+2;
            }
        }
        return -1;
    }
};
