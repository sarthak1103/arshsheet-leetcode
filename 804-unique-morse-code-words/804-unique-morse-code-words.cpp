class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
         string ar[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<string,int>mp;
        for(int i=0;i<words.size();i++){
            string s="";
            for(int j=0;j<words[i].size();j++){
                s+=ar[words[i][j]-'a'];
            }
            mp[s]++;
        }
        return mp.size();
    }
};