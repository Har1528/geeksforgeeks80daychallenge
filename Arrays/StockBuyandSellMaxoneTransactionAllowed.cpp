class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int n=prices.size();
        int profit=0;
        int min=0;
        for(int i=0;i<n;i++){
            if(prices[i]<prices[min]){
                min=i;
            }
            if(prices[i]>prices[min] && profit<prices[i]-prices[min]){
                profit=prices[i]-prices[min];
            }
        }
        return profit;
    }
};
