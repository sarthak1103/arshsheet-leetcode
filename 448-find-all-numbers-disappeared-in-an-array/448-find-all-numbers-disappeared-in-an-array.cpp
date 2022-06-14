class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        vector<int>ans;
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        for (int i=1;i<=n;i++){
            if (nums[count]==i){
                count++;
            }else {
                ans.push_back(i);
            }
        }
        return ans;
    }
};