1class Solution {
2public:
3    int uniquePaths(int m, int n) {
4       int dp[101][101];
5       for(int i=0;i<m;i++)
6       {
7        dp[i][0]=1;
8       }
9       for(int j=0;j<n;j++)
10       {
11        dp[0][j]=1;
12       }
13       for(int i=1;i<m;i++)
14       {
15        for(int j=1;j<n;j++)
16        {
17            dp[i][j]=dp[i-1][j]+dp[i][j-1];
18        }
19       }
20       return dp[m-1][n-1];
21    }
22
23};