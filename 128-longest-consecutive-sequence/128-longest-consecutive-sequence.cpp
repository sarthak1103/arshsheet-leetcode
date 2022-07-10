class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
           set<int> s(nums.begin(),nums.end());
        int LS=0;
        for( int i: s)
        {
            if(s.find(i-1)==s.end())
            {
            int currstreak=1;
            int currsum=i;
            while(s.find(currsum+1)!=s.end())
            {
                currsum+=1;
                currstreak+=1;
            }
            LS=max(LS,currstreak);
            }
        }
        return LS;
        
    }
};