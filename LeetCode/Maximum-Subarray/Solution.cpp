1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int maxSum=nums[0];
5        int sum=nums[0];
6        for(int i=1;i<nums.size();i++)
7        {
8            sum=max(nums[i],nums[i]+sum);
9            maxSum=max(maxSum,sum);
10        }
11        return maxSum;
12    }
13};