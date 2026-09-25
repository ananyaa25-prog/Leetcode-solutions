1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        /*
5       unordered_map<int,int> mp;
6       for(int nc:nums)
7       {
8        mp[nc]++;
9       }
10       for(auto x:mp)
11       {
12        if(x.second==1)
13        {
14            return x.first;
15        }
16       }
17       return{};
18       */
19       sort(nums.begin(),nums.end());
20       int ans;
21       for(int i=0;i<nums.size();i++)
22       {
23        int count=1;
24        while(i+1<nums.size() && nums[i]==nums[i+1])
25        {
26            count++;
27            i++;
28        }
29        if(count==1)
30         {
31           ans=nums[i];
32         }
33       }
34       return ans;
35    }
36};