class Solution {
public:
    bool isPalindrome(string s) {
        string w="";
        for(int i=0;i<s.length();i++)
        {
            if(isalnum(s[i]))
            {
                w+=tolower(s[i]);
            }
        }
       int start=0;
       int last=w.length()-1;
        while(start<last)
        {
            if(w[start]!=w[last])
            {
                return false;
            }
            else{
                start++;
                last--;
            }
        }
        return true;
    }
};