class Solution {
public:
//The problem is same as longest coomon subsequence.
//You just have to add an additional condition of i!=j.
int LongestRepeatingSubsequence(string str){
    // Code here
    int n=str.length();
    int dp[n+1][n+1];
    for(int i=0; i<=n; i++)
    for(int j=0; j<=n; j++)
    {
        if(i==0 || j==0)
        dp[i][j]=0;
        else if(str[i-1]==str[j-1] && i!=j)
        dp[i][j]=1+dp[i-1][j-1];
        else
        dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
    }
    return dp[n][n];
}
};
