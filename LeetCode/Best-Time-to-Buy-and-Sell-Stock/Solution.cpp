1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int minPrice=prices[0];
5        int maxProfit=0;
6        for(int i=0;i<prices.size();i++)
7        {
8            minPrice=min(minPrice,prices[i]);
9            int profit=prices[i]-minPrice;
10            maxProfit=max(maxProfit,profit);
11        }
12        return maxProfit;
13    }
14};