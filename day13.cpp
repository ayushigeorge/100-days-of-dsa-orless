class Solution{
public:	
	void immediateSmaller(vector<int>&arr, int n) {
	    //  code here
	   
	   
	    for(int i=0; i<=n; i++) {

	            if(arr[i]<=arr[i+1]|| i=n-1){
	              arr[i]=-1;  
	            }
	            else {
	                arr[i]= arr[i+1];
	            }
	            
	    

	}

};
