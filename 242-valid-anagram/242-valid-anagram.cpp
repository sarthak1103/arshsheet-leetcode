class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
       if(n!=m)
           return false;
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        for(int i=0;i<n;i++)
        {
            m1[s[i]]++;
        }
         for(int i=0;i<n;i++)
        {
            m2[t[i]]++;
        }
        for(auto i:m1)
        {    if(m1[i.first]!=m2[i.first])
                return false;
        }
        return true;
        
        
        
    }
};