class Solution {
  public:
    int findMaxLen(string s) {
        stack<int>stk;
        int ans=0;
    // Length of the smallest valid substring ( ) is 2.
        stk.push(-1);
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]=='(')stk.push(i);
            else{
                stk.pop();
                if(stk.empty())stk.push(i);
                ans = max(ans,i-stk.top());
            }
        }
        return ans;
    }
};
