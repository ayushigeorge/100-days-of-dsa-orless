int stockBuyAndSell(int n, vector<int> &arr) {
        // code here
        int sum = 0;
        for(int i = 1;i<n;i++)
            if(arr[i] > arr[i-1]) sum += arr[i] - arr[i-1];
            
        return sum;
    }
