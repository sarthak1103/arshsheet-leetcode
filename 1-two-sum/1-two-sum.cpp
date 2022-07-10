class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
       unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.count(nums[i]))
            {
                result.push_back(m[nums[i]]);
                result.push_back(i);
                break;
            }
            else{
                m[target-nums[i]]=i;
            }
        }
        return result;
    }
};