class Solution {
    private:
  int first(vector<int> arr, int target)  //function for first position of the target
{
    int low=0;
    int high=arr.size()-1;
    int mid = low + (high-low)/2;
    int pos=-1;
    
    while(low<=high)
    {
        if(arr[mid]==target)
        {
            pos=mid;
            high=mid-1;
        }
        else if(target>arr[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        mid = low + (high-low)/2;
    }
    return pos;
}

int last(vector<int> arr, int target) 
{
    int low=0;
    int high=arr.size()-1;
    int mid = low + (high-low)/2;
    int pos=-1;
    
    while(low<=high)
    {
        if(arr[mid]==target)
        {
            pos=mid;
            low=mid+1;        
        }
        else if(target>arr[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        mid = low + (high-low)/2;
    }
    return pos;
} 
    
public:
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> ans;
        ans.push_back(first(nums,target));
         ans.push_back(last(nums,target));
        return ans;
    }
        
           
};