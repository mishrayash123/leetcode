class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       int rowNum=matrix.size();
    int colNum=matrix[0].size();
    
    //initialise the index of col and row
    int startingRow=0;
    int startingCol=0;
    int endingRow=rowNum-1;
    int endingCol=colNum-1;

    //set count and total for counting how many rows converted into column
    int count=0;
    int total=rowNum-1;
         int i=0;
    
    //initilise new id vector and copy 2d matrix in it
      vector<int> ans;
        for(int row=startingRow; row<=endingRow; row++){
            for(int col=startingCol; col<=endingCol; col++){
             ans.push_back(matrix[row][col]);
            }
        }
    
    //checking how  many row are already converted
    while(count<=total){
                
        //iterate the row for converting in column
        for(int row=startingRow; row<=endingRow; row++){
            matrix[row][endingCol]=ans[i];
            i++;
        }
                endingCol--;
                count++;
    }
    
    }
};