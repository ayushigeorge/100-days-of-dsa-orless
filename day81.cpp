 class Solution{
public{
void solve(int index, vector<string>& ans, string s){
          
        if(index >= s.length())
        {
            ans.push_back(s);
            return ;
        }
        
        for(int i = index; i<s.size(); i++)
        {
            swap(s[i],s[index]);
            solve(index+1,ans,s);
            swap(s[i],s[index]);
        }
    }
    vector<string> permutation(string S)
    {
        //Your code here
        
        int index = 0;
        vector<string>ans;
        solve(index,ans,S);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
