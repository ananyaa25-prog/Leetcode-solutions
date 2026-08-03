1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4       unordered_map<int,int> mp;
5       mp[0]=1;
6       int sum=0;
7       int count=0;
8       for(int i=0;i<nums.size();i++)
9       {
10        sum+=nums[i];
11        if(mp.find(sum-k)!=mp.end())
12        {
13            count+=mp[sum-k];
14        }
15        mp[sum]++;
16       }
17       return count;
18    }
19};