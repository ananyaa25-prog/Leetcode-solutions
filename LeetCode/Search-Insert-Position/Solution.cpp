1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int left=0;
5        int right=nums.size()-1;
6        while(left<=right)
7        {
8            int mid=left+(right-left)/2;
9            if(nums[mid]==target)
10            {
11                return mid;
12            }
13            else if(nums[mid]<target)
14            {
15                left=mid+1;
16            }
17            else
18            {
19                right=mid-1;
20            }
21        }
22        return left;
23    }
24};