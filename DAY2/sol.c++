class Solution
{
public:
    vector<int> leaders(int a[], int n)
    {

        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            while (!ans.empty() && ans.back() < a[i])
                ans.pop_back();
            ans.push_back(a[i]);
        }
        return ans;
    }
};
