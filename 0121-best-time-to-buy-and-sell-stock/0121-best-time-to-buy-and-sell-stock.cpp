class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int profit = 0;

        int min = prices[0];

        for(int i=0;i<n;i++){
            if(prices[i]<min){
                min =  prices[i];
            }

            int diff = prices[i] - min;

            profit = max(profit,diff);
        }
        return profit;
    }
};