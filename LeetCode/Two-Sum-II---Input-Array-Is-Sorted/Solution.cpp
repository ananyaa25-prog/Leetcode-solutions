1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4      unordered_map<int,int>mp;
5      int n=numbers.size();
6      for(int i=0;i<n;i++)
7      {
8        int need=target-numbers[i];
9        if(mp.find(need)!=mp.end())
10        {
11            return{mp[need]+1,i+1};
12        }
13        mp[numbers[i]]=i;
14      }  
15       return{};
16    }
17};