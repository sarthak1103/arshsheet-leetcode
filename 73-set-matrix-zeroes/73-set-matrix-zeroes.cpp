class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      int row=matrix.size(),cols=matrix[0].size(); // store the size of rows and cols
        vector<int> dummy1(row,-1);//create one array of  size rows
         vector<int> dummy2(cols,-1);// create array of size cols
        for(int i=0;i<row;i++)//traverse in matrix 
        {
            for(int j=0;j<cols;j++)
            {
                if(matrix[i][j]==0)// if we found 0 
                {
                    dummy1[i]=0;// set array elemnts of rows to 0
                    dummy2[j]=0;// set array element of col to 0;
                }
            }
        }
        for(int i=0;i<row;i++) // again traverse in arays
        {
            for(int j=0;j<cols;j++)
            {
                if(dummy1[i]==0||dummy2[j]==0)// if dummy arrays elements are 0 
                {
                    matrix[i][j]=0;// then set matrix of i and j index elements to 0;
                }
            }
        }
        
        
    }
};