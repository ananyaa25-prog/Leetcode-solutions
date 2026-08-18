1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4        int n=matrix.size();
5        for(int i=0;i<n;i++)
6        {
7            for(int j=i+1;j<n;j++)
8            {
9                swap(matrix[i][j],matrix[j][i]);
10            }
11
12        }
13        for(int i=0;i<n;i++)
14        {
15            reverse(matrix[i].begin(),matrix[i].end());
16        }
17       
18    }
19};