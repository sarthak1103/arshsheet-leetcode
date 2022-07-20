class Solution {
public:
   void helper(int i,int n,int t,vector<int> temp,vector<int> &nums,vector<vector<int>> &res)
    {
        // base case
        if(i==n)
        {
            if(t==0)
            {
                res.push_back(temp);
            }
            return;
        }
        if(nums[i]<=t)
        {
            temp.push_back(nums[i]);
            helper(i,n,t-nums[i],temp,nums,res);
            temp.pop_back();
        }
        helper(i+1,n,t,temp,nums,res);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int> >res;
        vector<int> temp;
         helper(0,n,target,temp,candidates,res);
        return res;
        
    }
};