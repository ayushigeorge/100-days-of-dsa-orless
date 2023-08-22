class Solution{
public:
 int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        int rw=0; int cw=0; int maxi=0;
        for(int i=0; i<n; i++){
            int rs=0, cs=0;
            for(int j=0; j<n; j++){
                rs+=matrix[i][j];
                cs+=matrix[j][i];
            }
            rw=max(rw,rs);
            cw=max(cw,cs);
        }
        maxi=max(rw,cw);
        int ops=0;
        for(int i=0; i<n; i++){
            int rs=0, cs=0;
            for(int j=0; j<n; j++){
                rs+=matrix[i][j];
                cs+=matrix[j][i];
            }
            if(rw>cw){
                ops+=(rw-rs);
            }
            else {
                ops+=(cw-cs);
            }
        }
        return ops;
    } 
};
