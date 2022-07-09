class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int> mm;
       
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            mm[nums[i]]++;
        }
        for(auto i:mm)
            if(i.second>nums.size()/2){
                res=i.first;
                
                }
        
        return res;
    }
};