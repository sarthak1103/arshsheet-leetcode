class Solution {
public:
    void helper(int ind, int n, vector<int> &nums, vector<int> temp, vector<vector<int>> &res){
        
        if(ind==n){
            sort(temp.begin(),temp.end());
            res.push_back(temp);
            temp.push_back(nums[ind]);
            sort(temp.begin(),temp.end());
            res.push_back(temp);
            return;
        }
        helper(ind+1,n,nums,temp,res);
        temp.push_back(nums[ind]);
        helper(ind+1,n,nums,temp,res);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector <int> temp;
        int n=nums.size();
        
        helper(0,n-1,nums,temp,res);
        sort(res.begin(),res.end());
        res.erase(unique(res.begin(),res.end()),res.end());
        return res;
    }
};