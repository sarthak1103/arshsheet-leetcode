class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=prices[0];
        int max=0;
        for(int i=1;i<prices.size();i++)
        {
           if(prices[i]<left)
           {
                left=prices[i];
           }
            else if(prices[i]-left>max){
                max= prices[i]-left;
            }
        }
        return max;
    }
};