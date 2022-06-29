// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        unordered_map<char,int> m;
        int len=str.length();
        int maxi=0;
        for(int i=0;i<len;i++)
        {
            m[str[i]]++;
            maxi=max(maxi,m[str[i]]);
        }
        for(char i='a';i<='z';i++)
        {
            if(m[i]==maxi)
            {
                return i;
            }
        }
    }

};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends