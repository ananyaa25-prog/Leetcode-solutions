1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4        int count=0;
5        for(int i=0;i<nums.size();i++)
6        {
7            int sum=0;
8            
9            for(int j=i;j<nums.size();j++)
10            {
11                sum+=nums[j];
12                if(sum==k)
13                {
14                    count++;
15                }
16            }
17        }
18        return count;
19    }
20};