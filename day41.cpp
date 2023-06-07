class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    int i=0;
	    int j=M-1;
	    while((i>=0 && i<N ) && (j>=0 && j<M)) {
	        if(mat[i][j] == X) return 1;
	        else {
	            if(X < mat[i][j]) j--;
	            else if(X > mat[i][j]) i++;
	        }
	    }
	    
	    return 0;
	}
};
