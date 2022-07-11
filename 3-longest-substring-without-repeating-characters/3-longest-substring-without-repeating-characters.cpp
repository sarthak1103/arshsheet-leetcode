class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    unordered_map<char,int> map;
        int ans = 0, len = 0;
        
        for(int i = 0;i<s.size();i++){
            if(map.find(s[i])!=map.end()) 
                ans = max(ans,map[s[i]]+1);
            
            map[s[i]] = i;
            len = max(len,i-ans+1);
        }
        return len;
        
        
    }
};