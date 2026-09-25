1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4       int ans;
5       sort(nums.begin(),nums.end());
6       for(int i=0;i<nums.size();i++)
7       {
8        int count=1;
9        while(i+1<nums.size() && nums[i]==nums[i+1])
10        {
11            count++;
12            i++;
13        }
14        if(count==1)
15        {
16            ans=nums[i];
17        }
18       }
19       return ans; 
20    }
21};