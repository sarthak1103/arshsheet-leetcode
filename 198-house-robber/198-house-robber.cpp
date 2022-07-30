class Solution {
public:
    int robber(int ind,vector<int> &nums,vector<int> &dp)
    {
        if(ind==0) return nums[ind];
        if(ind<0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        // if i will pick that subset
        int pick=nums[ind]+robber(ind-2,nums,dp);
        // if not pick
        int notPick= 0+ robber(ind-1,nums,dp);
        
        return dp[ind]=max(pick,notPick);
        
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
       return robber(n-1,nums,dp);
        
    }
};