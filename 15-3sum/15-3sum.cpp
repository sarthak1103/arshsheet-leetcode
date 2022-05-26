class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector <vector<int>> v;
   
        sort(nums.begin(),nums.end());
        

        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k=nums.size()-1;
            if(i==0 ||(i>0 && nums[i]!=nums[i-1])){
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    v.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    while(j<k && nums[j]==nums[j-1])j++;
                }
                else if(sum>0){
                    k--;
                }
                else {
                    j++;
                }
            }
        }
        }
        return v;
    }
};