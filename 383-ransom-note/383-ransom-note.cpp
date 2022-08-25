class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.length();
        int m=magazine.length();
        map<char,int> mp;
        for(int i=0;i<m;i++)
        {
            mp[magazine[i]]++;
        }
        for(auto i:ransomNote)
        {
            if(mp.count(i) &&mp[i]>0)
                mp[i]-=1;
            else
                return false;
        }
        return true;
        
    }
};