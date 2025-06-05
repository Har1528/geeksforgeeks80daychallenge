class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int n=prices.size();
        int profit=0;
        int i=0;
        while(i<n-1){
            if(prices[i]<prices[i+1]){
                profit=profit+prices[i+1]-prices[i];
            }
            i++;
        }
        return profit;
    }
};
