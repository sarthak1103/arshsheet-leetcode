class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=0;
        map<int,int> m;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto x:m)
        {
            if(x.second>n/2)
            {
                ans=x.first;
            }
        }
        return ans;
    }
};