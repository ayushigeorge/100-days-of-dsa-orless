class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	sort(arr, arr+n);
	
	int i=0;
	int j=n-1;
	while(i<j){
	
	    
	    if(arr[i]+arr[j]==x) return true;
	    else if(arr[i]+arr[j]<x) i++;
	    else j--;
	}
	    return false;
	
	}
};
