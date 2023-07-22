class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minso=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++)
        {
         minso=min(minso,prices[i]);
          profit=max(profit,prices[i]-minso) ; 
}
    return profit;    
    }
};