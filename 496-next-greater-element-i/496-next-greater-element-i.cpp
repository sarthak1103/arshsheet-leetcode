class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        stack<int> s;
        int n=nums2.size();
        for(int i=n-1;i>=0;i--)
        {
            int ele=nums2[i];
            while(!s.empty() && s.top()<=ele)
            {
                s.pop();
            }
            int ans= (s.empty())? -1: s.top();
            m.insert({ele,ans});
            s.push(ele);
        }
        vector<int> res;
        for(auto i:nums1){
            res.push_back(m[i]);
    }
        return res;
    }
};