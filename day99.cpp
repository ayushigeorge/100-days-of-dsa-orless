class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int s=0;
	    int e= S.length();
	    while(s<e){
	        if(S[s]!=S[e]) return false;
	        s++; e--;
	    }
	    return true;
	}
};
