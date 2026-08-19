1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int l=0;
5        int r=nums.size()-1;
6        while(l<=r)
7        {
8            int mid= l + (r - l) / 2;
9            if(nums[mid]==target)
10            {
11                return mid;
12            }
13            else if(nums[mid]<target)
14            {
15                l=mid+1;
16            }
17            else
18            {
19                r=mid-1;
20            }
21        }
22        return -1;
23
24    }
25};