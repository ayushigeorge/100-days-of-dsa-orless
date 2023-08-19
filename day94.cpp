class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int first=0, last=0;
        long long sum=0;
        if(s==0)
            return {-1};
         while((last<=n)&& last>=first){
             if(sum==s) return {first+1,last};
             else if (sum>s) sum-=arr[first++];
             else sum+=arr[last++];
         }   
         return {-1};
        
    }
};
