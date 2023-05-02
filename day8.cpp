class Solution{
    public:
    
    map<vector<int>, int> m;
    int f(vector<int> &a, int n, int k, int si, int prev){
        
        // cout << prev << endl;
        // base case 
        if(k == 0){
            int sum = 0;
            for(int i = si; i < n; i++){
                sum += a[i];
            }
            int val = min(prev, sum);
            return val;
        }
        
        if(m.find({k, si, prev}) != m.end()) return m[{k, si, prev}];
        
        int sum = 0;
        int res = INT_MIN;
        for(int i = si; i < n - k; i++){
            sum += a[i];
            
            int val = min(prev, sum);
            int temp = f(a, n, k - 1, i + 1, val);
            
            res = max(res, temp);
        }
        
        return m[{k, si, prev}] =  res;
    }
    int maxSweetness(vector<int>& a, int n, int k) {
    // Write your code here.
        int res = f(a, n, k, 0, INT_MAX);
        
        return res;
    }
};
