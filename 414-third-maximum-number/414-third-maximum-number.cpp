class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int last = nums[nums.size()-1];
        int count = 1;
        for(int i=nums.size()-2;i>=0;i--){
            if(last>nums[i]){
                count++;
                last = nums[i];
            }
            if(count==3)
                return last;
        }
        return nums[nums.size()-1];
        
        
    }
};