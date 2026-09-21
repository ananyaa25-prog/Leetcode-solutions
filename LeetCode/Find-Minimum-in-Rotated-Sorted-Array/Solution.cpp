1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int minN=INT_MAX;
5        for(int i=0;i<nums.size();i++)
6        {
7            if(nums[i]<minN)
8            {
9                minN=nums[i];
10            }
11        }
12        return minN;
13    }
14};