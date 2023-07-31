class Solution {
public:
    vector<vector<int>> dp;
    int remains(string s , int i){
        int sum = 0;
        for(int j = i ; j < s.size() ; j++){
            sum += s[j];
        }
        return sum;
    }
    int dfs(int i , int j , string& s1 , string& s2){
        if(i == s1.size() && j == s2.size()) return 0;
        if(i == s1.size() && j < s2.size()) return remains(s2 , j);
        if(j == s2.size() && i < s1.size()) return remains(s1 , i);
        if(dp[i][j] != -1) return dp[i][j];
        if(s1[i] == s2[j]){
            return dp[i][j] = dfs(i + 1 , j + 1 , s1 , s2);
        }
        else{
            return dp[i][j] = min({s1[i]+ dfs(i + 1 , j , s1 , s2) ,
                                s2[j] + dfs(i , j + 1 , s1 ,s2) ,});
        }
    }
    int minimumDeleteSum(string s1, string s2) {
        int n1 = s1.size() , n2 = s2.size();
        dp.resize(n1 , vector<int>(n2 , -1));
        return dfs(0 , 0 , s1 , s2);
    }
};
