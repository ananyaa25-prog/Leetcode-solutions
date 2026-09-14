1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4       int minPrice=prices[0];
5       int maxProfit=0;
6       int n=prices.size();
7       for(int i=1;i<n;i++)
8       {
9        minPrice=min(minPrice,prices[i]);
10        int profit=prices[i]-minPrice;
11        maxProfit=max(maxProfit,profit);
12       }
13       return maxProfit;
14    }
15};