class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> m;
        int ans;
        
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto i: m)
        {
            if(i.second>1)
            {
                ans=i.first;
            }
        }
        return ans;
    }
};