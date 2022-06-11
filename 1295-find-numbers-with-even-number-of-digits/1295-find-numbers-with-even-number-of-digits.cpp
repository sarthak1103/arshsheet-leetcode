class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int res=0;
      for(int i=0;i<nums.size();i++)
{
      int x=nums[i];
      int count=0;
    while(x!=0)
 {
     count++;
     x=x/10;
}
   if(count%2==0)
    res++;
}
    return res;
}
};
      