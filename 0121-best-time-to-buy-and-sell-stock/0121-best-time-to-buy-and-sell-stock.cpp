class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int miniso=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++)
        {
            miniso=min(miniso,prices[i]);
         profit=max(profit,prices[i]-miniso);
        }
       
        return profit;
        
    }
};