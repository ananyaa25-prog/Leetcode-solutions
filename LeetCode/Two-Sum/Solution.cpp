1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        vector<int>ans;
5        for(int i=0;i<nums.size();i++)
6        {
7            for(int j=i+1;j<nums.size();j++)
8            {
9                if((nums[i]+nums[j])==target)
10                {
11                    ans.push_back(i);
12                    ans.push_back(j);
13                }
14            }
15        }
16        return ans;
17    }
18};