class Solution {
public:
    int missingNumber(vector<int>& nums) {
       // sort(nums.begin(),nums.end());
        int ans=0;
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            ans+=nums[i];
            res=(nums.size()*(nums.size()+1))/2-ans;
        }
        return res;
    }
};