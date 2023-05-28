
closs Solution{
private:
    void solve(int low, int high, vector<int>& nums, vector<int>& ans)
    {
        if(low > high)
        {
            return;
        }
        int mid = (low+high) >> 1;
        ans.push_back(nums[mid]);
        solve(low, mid-1, nums, ans); // first left
        solve(mid+1, high, nums, ans); // then right
    }
public:
    vector<int> sortedArrayToBST(vector<int>& nums) {
        vector<int> ans;
        solve(0, nums.size()-1, nums, ans);
        return ans;
    }
};
