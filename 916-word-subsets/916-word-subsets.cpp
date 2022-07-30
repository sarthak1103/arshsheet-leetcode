class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
       vector<string>ans;
        
        unordered_map<char,int>Freq;
        for(auto w2 : words2)
        {
            unordered_map<char,int>temp;
            for(auto i : w2)
                temp[i]++;
            for(auto i : temp)
                Freq[i.first] = max(Freq[i.first],temp[i.first]);
        }
        
        for(auto w1 : words1)//leetcode
        {
            unordered_map<char,int>m1;
            for(auto i : w1)
                m1[i]++;
            
            bool flag = true; 
            for(auto i : Freq)
            {
                if(Freq[i.first] > m1[i.first])
                {
                    flag = false;
                    break;
                }
            }
            if(flag == true)
                ans.push_back(w1);
        }
        return ans;
    }
};