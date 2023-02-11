//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        int ori=N;
        int count=0;
        while(ori!=0)
        {
            int rem=ori%10;
            if(rem!=0 && N%rem==0)
            {
                count++;
            }
            ori=ori/10;
//cout<<"thie value of ori is "<<ori<<" ";
        }
        // if(ori%N==0)
        // {
        //     count++;
        // }
        return count;
        //cout<<"count is "<<count<<" ";
    }
};
    

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends