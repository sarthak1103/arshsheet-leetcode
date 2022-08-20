class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
    int n=stations.size();
    int curr=startFuel, i=0;     
    int ans=0;
    
    priority_queue<int> q;      
    
    while(curr < target){
        
        while(i<n && curr >= stations[i][0]){    
            q.push(stations[i][1]);                 
            i++;                                     
        }
        
        if(q.empty()) return -1;          
        
        curr += q.top();
        q.pop();
        
        ans++;                             
    }
    return ans;
    }
};