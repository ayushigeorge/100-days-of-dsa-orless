vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> ans;
        int m = r;
        int n = c;
        
        int totalElement = m * n;
        
        int startingRow = 0;
        int endingCol = n - 1;
        int endingRow = m - 1;
        int startingCol = 0;
        
        int count = 0;
        
        while(count < totalElement){
            for(int i = startingCol; i<= endingCol && count<totalElement; i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
            
            for(int i = startingRow; i<= endingRow && count < totalElement; i++){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
            
            
             for(int i = endingCol; i>= startingCol&& count < totalElement; i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            
            endingRow--;
            
             for(int i = endingRow; i>= startingRow && count < totalElement; i--){
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            
            startingCol++;
            
        }
        
        return ans;
        
    }
};
