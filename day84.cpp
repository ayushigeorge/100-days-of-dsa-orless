class Solution{
public: 
    long long int largestPrimeFactor(int N){
        // code here
        if(N<=1) return 0;
        for(int i=0; i<=sqrt(N); i++){
            if(N%i==0){
                N/=i;
                i--;
            }
        }
        //long long result=N;
        return N;
    }
};
