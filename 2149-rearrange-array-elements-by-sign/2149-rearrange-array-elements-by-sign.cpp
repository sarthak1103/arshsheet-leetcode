class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int> positive;
        vector<int> negative;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                positive.push_back(nums[i]);
            }
            else{
                negative.push_back(nums[i]);
            }
        }
        int i=0;
        int n=nums.size()/2;
        nums.clear();
        while(i<n)
        {
            nums.push_back(positive[i]);
            nums.push_back(negative[i]);
            i++;
        }
      return nums;
    }
};