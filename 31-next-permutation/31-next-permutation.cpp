class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-2;
        bool flag=false;
        int j=nums.size()-1;
        while(i>=0)
        {
            if(nums[i]<nums[i+1])
               { flag=true;
                break;}
            i--;
            
        }
        if(flag==false)
        {
            reverse(nums.begin(),nums.end());
            
        }
        else{
            while(j>=0)
            {
                if(nums[j]>nums[i])
                    {swap(nums[i],nums[j]);
                    break;}
                j--;
            }
            reverse(nums.begin()+i+1,nums.end());
        }
        
    }
};