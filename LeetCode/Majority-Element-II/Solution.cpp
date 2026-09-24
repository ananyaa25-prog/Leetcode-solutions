1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4        unordered_map<int,int>mp;
5        vector<int>ans;
6        int n=nums.size();
7        for(int sc:nums)
8        {
9            mp[sc]++;
10        }
11        for(auto x:mp)
12        {
13            if(x.second>n/3)
14            {
15                ans.push_back(x.first);
16            }
17        }
18        return ans;
19
20    }
21};