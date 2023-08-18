class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>ac;
        int max=a[n-1];
        ac.push_back(max);
        for (int j=n-2; j>=0; j--){
            if(a[j]<max){
                continue;
            }
            else {
                ac.push_back(a[j]);
                max=a[j];
                continue;
            }
        }
        sort(ac.begin(), ac.end(), greater<int>());
        return ac;
        
    }
};
