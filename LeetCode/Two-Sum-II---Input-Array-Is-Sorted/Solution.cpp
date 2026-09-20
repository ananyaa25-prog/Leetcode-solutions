1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        unordered_map <int,int> mp;
5        for(int i=0;i<numbers.size();i++)
6        {
7            int need=target-numbers[i];
8            if(mp.find(need)!=mp.end())
9            {
10                return{mp[need]+1,i+1};
11            }
12            mp[numbers[i]]=i;
13        }
14        return {};
15    }
16};