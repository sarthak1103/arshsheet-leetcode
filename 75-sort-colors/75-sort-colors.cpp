class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int left=0,right=nums.size()-1;
        int third =0;
        while(third<=right)
        {
            if(nums[third]==0)
            {
                swap(nums[left],nums[third]);
                left++;
                third++;
                
                
            }
            else if(nums[third]==1)
            {
                
                third++;
            }
            else if(nums[third]==2)
                    {
                        swap(nums[third],nums[right]);
                        right--;
                           
                    }
        }
    }
};