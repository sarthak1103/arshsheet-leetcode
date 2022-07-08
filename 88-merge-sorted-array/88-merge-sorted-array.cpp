class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int count=0;
         if (nums1.size()==0 || nums2.size()==0){
            return;
        }
        for(int i=0;i<m;i++)
        {
            if(nums1[i]>nums2[0])
                swap(nums1[i],nums2[0]);
            sort(nums2.begin(),nums2.end());
            count++;
        }
        int j=0;
        while (j<n){
            nums1[count++]=nums2[j++];
        }
        
        
       
    }
};