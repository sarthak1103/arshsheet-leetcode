class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);// first we create our resultunt matrix of size number of rows
        for(int i=0;i<numRows;i++)// the we will traverse in the resultant vector
        {
            res[i].resize(i+1);// and resize the  the paticular size of that vector in matrix
            for(int j=0;j<=i;j++)// now we will travers ein that paticular vector of matrix result
            {
                if(j==0)// check that if we are atr first element 
                {
                    res[i][j]=1;// then fill it wil one
                }
                 else if(j==i)// same check for the last element 
                {
                    res[i][j]=1;// again fill it with 1
                }
                else{
                    res[i][j]=res[i-1][j-1]+res[i-1][j];// in last we will add if we are not on 1 or last element  then fill all the  left element of matrix with the adition of above logic
                }
            }
        }
        return res;// return the result vector
      
        
    }
};