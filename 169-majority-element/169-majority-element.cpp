class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int> mm;
        int ans;
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            mm[nums[i]]++;
            if(mm[nums[i]]>res){
                res=mm[nums[i]];
                 ans=nums[i];
                }
        }
        return ans;
    }
};