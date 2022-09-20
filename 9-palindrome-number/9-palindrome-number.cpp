class Solution {
public:
    bool isPalindrome(int x) {
        long long  rev=0;
        long long ori=x;
        while(ori>0)
        {
            int rem=ori%10;
            rev=rev*10+rem;
            ori/=10;
        }
        if(rev==x)
        {
            return true;
        }
     return false;
    }
};