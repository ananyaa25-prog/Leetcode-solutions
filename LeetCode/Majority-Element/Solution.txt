1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        int n=nums.size();
6        int ans;
7        int i=0;
8        for(int i=0;i<n;i++)
9        {
10            int count=1;
11            while(i+1<n && nums[i]==nums[i+1])
12            {
13                count++;
14                 i++;
15            }
16           if(count>n/2)
17           {
18            ans=nums[i];
19           }
20        }
21return ans;
22    }
23};