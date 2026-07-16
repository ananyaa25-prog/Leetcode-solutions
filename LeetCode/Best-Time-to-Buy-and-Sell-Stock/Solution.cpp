1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int minPrice = INT_MAX;
5        int profit = 0;
6
7        for(int i = 0; i < prices.size(); i++)
8        {
9            if(prices[i] < minPrice)
10            {
11                minPrice = prices[i];
12            }
13
14            profit = max(profit, prices[i] - minPrice);
15        }
16
17        return profit;
18    }        
19};