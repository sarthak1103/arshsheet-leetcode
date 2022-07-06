class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();// first we wll store the size of orignal matrix
        for(int i=0;i<n;i++)// now traverse in  each vector of matrix
        {
            for(int j=0;j<i;j++)// traversing elemnts in each matrix
            {
                swap(matrix[i][j],matrix[j][i]);// swaping th elements of rows into col and col into rows
            }
        }
        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());// finaly revesing the each vector(row) in matrix
        }
        
    }
};