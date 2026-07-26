1class Solution {
2public:
3    vector<vector<int>> fourSum(vector<int>& nums, int target) {
4        vector<vector<int>> ans;
5        sort(nums.begin(),nums.end());
6        int n=nums.size();
7        for(int i=0;i<n-3;i++)
8        {
9            if(i>0 && nums[i]==nums[i-1])
10            {
11              continue;
12            }
13            for(int j=i+1;j<n-2;j++)
14            {
15            if(j>i+1 && nums[j]==nums[j-1])
16            {
17            continue;
18            }
19            int left=j+1;
20            int right=n-1;
21
22            while(left<right)
23            {
24                long long sum=(long long)nums[i]+nums[j]+nums[left]+nums[right];
25                if(sum==target)
26                {
27                    ans.push_back({nums[i],nums[j],nums[left],nums[right]});
28                    left++;
29                    right--;
30                    while(left<right && nums[left]==nums[left-1])
31                    left++;
32                    while(left<right && nums[right]==nums[right+1])
33                    right--;
34                }
35                else if(sum<target)
36                {
37                    left++;
38                }
39                else
40                {
41                    right--;
42                }
43            }
44            }
45        }
46        return ans;
47    }
48};
49