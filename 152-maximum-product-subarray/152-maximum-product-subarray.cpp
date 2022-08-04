class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int MIN=nums[0] , MAX=nums[0],result=nums[0];
        for(int i=1;i<nums.size();i++)
        {  
            if(nums[i]==0)
            {   result=max(result,0);
                MIN=1;
                MAX=1;
                continue;
            }
           
            auto temp = MAX*nums[i];
            MAX=max(temp,max(nums[i],MIN*nums[i]));
            MIN=min(temp,min(nums[i],MIN*nums[i]));
            result=max(MAX,result);
        }
        return result;
        }
};