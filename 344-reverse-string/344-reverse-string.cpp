class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0;
        int t=s.size()-1;
        while(st<t)
        {
            swap(s[st++],s[t--]);
        }
    }
};