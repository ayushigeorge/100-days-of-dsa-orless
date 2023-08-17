class Solution{
public:
	vector<int> generateNextPalindrome(int num[], int n) {
	    // code here
	    bool check= false;
	    vector<int>ans(num, num+n);
	    for(int i=0; i<n/2; i++){
	        if(ans[i]>ans[n-i-1]){
	            ans[n-i-1]=ans[i];
	            check=true;
	        }
	        else if(ans[i]<ans[n-i-1]){
	            ans[n-i-1]= ans[i];
	            check=false;
	        }
	    }
	    if(check){
	        return ans;
	    }
	    else {
	        int c=0;
	        for(int i=0; i<n; i++){
	            if(ans[i]==9){
	                c++;
	            }
	        }
	        if(c==n){
	            vector<int>anss;
	            anss.push_back(1);
	            for(int i=0; i<n-1; i++){
	                anss.push_back(0);
	            }
	            anss.push_back(1);
	            return anss;
	        }
	        else{
	            if(n%2){
	                int carry= (ans[n/2]+1)/10;
	                ans[n/2]=(ans[n/2]+1)%10;
	                int crry1= carry;
	                for(int i=n/2-1; i>=0; i--){
	                    int t=(ans[i]+crry1)/10;
	                    ans[i]=(ans[i]+crry1)%10;
	                    crry1=t;
	                }
	                crry1=carry;
	                for(int i=n/2+1; i<n; i++){
	                    int t=(ans[i]+crry1)/10;
	                    ans[i]=(ans[i]+crry1)%10;
	                    crry1=t;
	                }
	                return ans;
	            }
	            else {
	                int carry=1;
	                for(int i=n/2-1; i>=0; i--){
	                    int t=(ans[i]+carry)/10;
	                    ans[i]=(ans[i]+carry)%10;
	                    carry =t;
	                }
	                carry =1;
	                for(int i=n/2; i<n; i++){
	                    int t=(ans[i]+carry)/10;
	                    ans[i]=(ans[i]+carry)%10;
	                    carry =t;
	                }
	                return ans;
	            }
	        }
	    }
	}
};
