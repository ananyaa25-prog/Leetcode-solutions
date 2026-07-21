1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> row;
6        sort(nums.begin(),nums.end());
7        for(int i=0;i<n;i++)
8        {
9            int count=1;
10            while(i+1<n && nums[i]==nums[i+1])
11            {
12                count++;
13                i++;
14            }
15            if(count>n/3)
16            {
17                row.push_back(nums[i]);
18            }
19        }
20        return row;
21        }
22};