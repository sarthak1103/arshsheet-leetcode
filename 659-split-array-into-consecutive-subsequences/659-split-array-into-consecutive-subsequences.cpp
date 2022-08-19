class Solution {
public:
    bool isPossible(vector<int>& nums) {
          map<int,int> mp,mm;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i :nums){
            if(mp[i]==0)
                continue;
            mp[i]--;
            if(mm[i-1]>0){
                mm[i-1]--;
                mm[i]++;
            }
            else if(mp[i+1]!=0 && mp[i+2]!=0){
                mp[i+1]--;
                mp[i+2]--;
                mm[i+2]++;
            }
            else
                return false;
        }
        return true;
    }
};