class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=INT_MIN;
        int min=0;
        for(int i=0;i<nums.size();i++)
        {
            min+=nums[i];
            if(max<min)
            {
                max=min;
            }
            if(min<0)
            {
                min=0;
            }
        }
        return max;
    }
};