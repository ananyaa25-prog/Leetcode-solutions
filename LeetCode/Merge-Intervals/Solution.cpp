1class Solution {
2public:
3    vector<vector<int>> merge(vector<vector<int>>& intervals) {
4           sort(intervals.begin(),intervals.end());
5           vector<vector<int>> ans;
6            int i=0;
7           while(i<intervals.size())
8           {
9            vector<int> row;
10            int start=intervals[i][0];
11            int end=intervals[i][1];
12            while(i+1<intervals.size() && intervals[i+1][0]<=end)
13            {
14                end=max(end,intervals[i+1][1]);
15                i++;
16            }
17            row.push_back(start);
18            row.push_back(end);
19            
20            ans.push_back(row);
21            i++;
22           }  
23           return ans;                 
24    }
25};