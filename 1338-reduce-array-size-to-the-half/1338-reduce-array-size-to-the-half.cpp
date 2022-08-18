class Solution {
public:
        	int minSetSize(vector<int>& arr) {
    
    int size=arr.size();
    unordered_map<int,int> mm;    
    priority_queue<int> q;      
    
    for(auto it:arr) mm[it]++;    
    
    for(auto it:mm) q.push(it.second)  ;
    int element=0, Count=0;
    while(!q.empty()){    
        element+=q.top();
        q.pop();          
        Count++;
        
        if(element>=size/2) return Count;
    }
    return 0;
        
    }
};