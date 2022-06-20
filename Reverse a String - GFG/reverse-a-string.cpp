// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string revStr(string S) {
        string sol;
        for(int i=S.length()-1;i>=0;i--)
        {
            sol.push_back(S[i]);
            
        }
        return sol;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.revStr(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends