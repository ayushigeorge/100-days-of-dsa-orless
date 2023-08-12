class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       vector<int>subSeq;
       for(int i=0; i<n; i++){
           auto it= lower_bound(subSeq.begin(),subSeq.end(),a[i]);
           if(it !=subSeq.end())*it=a[i];
           else subSeq.push_back(a[i]);
       }
       return subSeq.size();
    }
};
