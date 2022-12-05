class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int> mp;
        char ans;
     
        for(auto x: s)
        {
            mp[x]++;
            if(mp[x]>1)
            {
               ans= x;
                break;
            }
        }
        return ans;
    }
};