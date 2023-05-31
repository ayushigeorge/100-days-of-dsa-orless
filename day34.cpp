class Solution{
public: 
    long long int largestPrimeFactor(int N){
        // code here
        bool Prime(int n){
        if(n==1 || n==2) return true;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    long long int largestPrimeFactor(int N){
        // code here
        if(Prime(N)) return N;
        long long int maxi=0;
        for(long long int i=2;i<N;i++){
            if(N%i==0 && Prime(i)){
                maxi=max(i,maxi);
            }
            if(N%(N/i)==0 && Prime(N/i)){
                maxi=max(N/i,maxi);
            }
        }
        return maxi;
        
    
    }
};
