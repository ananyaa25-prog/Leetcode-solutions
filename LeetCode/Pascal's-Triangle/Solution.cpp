1/*
2class Solution {
3public:
4    vector<vector<int>> generate(int numRows) {
5        
6    }
7};
8*/
9//so
10//my solution
11#include<bits/stdc++.h>
12using namespace std;
13
14class Solution
15{
16    public:
17
18    vector<vector<int>> generate (int numRows)
19    {
20        vector<vector<int>> ans;
21
22        for(int i=0;i<numRows;i++)
23        {
24            vector<int> row;
25            for(int j=0;j<=i;j++)
26            {
27                if(j==0||j==i)
28                {
29                    row.push_back(1);
30                }
31                else
32                {
33                    int value=ans[i-1][j-1]+ans[i-1][j];
34                    row.push_back(value);
35                }
36                
37            }
38            ans.push_back(row);
39        }
40        return ans;
41
42    }
43};