 class Solution{
public:
int findK(int a[MAX][MAX],int n,int m,int k)
    {
        int left = 0, top = 0;
        int right = m-1, bottom = n-1;
        vector<int> spiral;
        while(top<=bottom && left<=right){
            // Left -> right
            for(int i = left; i<=right; i++){
                spiral.push_back(a[top][i]);
            }
            top++; // increment top for the next element on the boundary
            // top -> bottom
            for(int i=top;i<=bottom;i++){
                spiral.push_back(a[i][right]);
            }
            right--; // Decrement right as we taken one element on the bottom boundary in previous loop
            // Check Edge case, if not written it will give recursive data
            if(left<=right){
            // right -> left
            for(int i=right; i>=left; i--){
                    spiral.push_back(a[bottom][i]);
                }
                bottom--; // decrement bottom
            }
            // Edge case
            if(top<=bottom){
                //bottom -> top
                for(int i=bottom; i>=top; i--){
                    spiral.push_back(a[i][left]);
                }
                left++; // incerement left
            }
        }
        return spiral[k-1];
    }
};
