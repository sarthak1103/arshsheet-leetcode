class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
      priority_queue<int> q;
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                 q.push(matrix[i][j]);
            }
        }
        while(q.size()>k)
        {
            q.pop();
        }
        return q.top();
    }
};