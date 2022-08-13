class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
          unordered_map<string, int> m;
        for(auto word : words) m[word]++;
        vector<int> ans;
        int n = s.size(), num = words.size(), len = words[0].size();
        for(int i = 0; i < (n - num * len + 1); ++i){
            unordered_map<string, int> mp;
            int j = 0;
            for(; j < num; ++j){
                string word = s.substr(i + j * len, len);
                if(m.find(word) != m.end()){
                    mp[word]++;
                    if(mp[word] > m[word]) break;
                } else break;
            }
            if(j == num) ans.push_back(i);
        }
        return ans;
    }
};