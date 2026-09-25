1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4       unordered_map<int,int> mp;
5       for(int nc:nums)
6       {
7        mp[nc]++;
8       }
9       for(auto x:mp)
10       {
11        if(x.second==1)
12        {
13            return x.first;
14        }
15       }
16       return{};
17    }
18};