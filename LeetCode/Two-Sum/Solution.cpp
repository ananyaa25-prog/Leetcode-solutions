1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int,int> mpp;
5        int n=nums.size();
6        for(int i=0;i<n;i++)
7        {
8            int need=target-nums[i];
9            if(mpp.find(need)!=mpp.end())
10            {
11                return{mpp[need],i};
12            }
13            mpp[nums[i]]=i;
14        }
15        return {};
16    }
17};