1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int l = 0;
5        int r = nums.size() - 1;
6
7        while(l <= r) {
8            int mid = l + (r - l) / 2;
9
10            if(nums[mid] == target) {
11                return mid;
12            }
13            else if(nums[mid] < target) {
14                l = mid + 1;     // target is on RIGHT
15            }
16            else {
17                r = mid - 1;     // target is on LEFT
18            }
19        }
20
21        return -1;
22    }
23};