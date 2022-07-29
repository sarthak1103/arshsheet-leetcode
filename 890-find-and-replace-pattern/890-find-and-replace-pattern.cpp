class Solution {
public:
    bool check(string w, string p){
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        for(int i=0; i<w.size();i++){
            if(!m1.count(w[i]))
                m1[w[i]]=p[i];
            if(!m2.count(p[i]))
                m2[p[i]]=w[i];
            if(m1[w[i]]!=p[i]||m2[p[i]]!=w[i])
                return false;
        }
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> res;
        for (auto word:words){
            if(check(word,pattern))
                res.push_back(word);
        }
        return res;
        
    }
};