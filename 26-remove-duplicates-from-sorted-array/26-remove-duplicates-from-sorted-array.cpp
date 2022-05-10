class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // we will initialise count with 0
        int count=0;
        
        // trsversing array and comparing two index
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i+1])
            {
                // overriding the element to remove the duplicates
                nums[count]=nums[i];
                
                // increasing count
                count++;
            }
            
        }
        // checking for the last value
        nums[count]=nums[nums.size()-1];
            count++;
        // return the count 
        return count;
    }
};