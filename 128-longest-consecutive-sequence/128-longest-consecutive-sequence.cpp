class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int ,int> m;
        int count=1,ans=1;
        if(nums.size()==0)
            return 0;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]=1;
        }
        for(auto x:m)
        {
           if( m.find(x.first+1)!=m.end())
           {
               count++;
           }
            else{
                count=1;
               
            }
            ans=max(count,ans);
        }
        return ans;
    }
};