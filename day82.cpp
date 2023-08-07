class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(), m=matrix[0].size();
        for(int i=0, j=m-1; i<n && j>=0;){
            int x=matrix[i][j];
            if(x==target){
                return true;
            }
            else if (x>target){
                j--;
            }
            else {
                i++;
            }
        }
        return false;
    }
};
