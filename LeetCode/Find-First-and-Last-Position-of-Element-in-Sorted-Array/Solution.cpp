1class Solution {
2public:
3    vector<int> searchRange(vector<int>& nums, int target) {
4       int left=0;
5       int right=nums.size()-1;
6       int first=-1;
7       int last=-1;
8       while(left<=right)
9       {
10        int mid=left+(right-left)/2;
11        if(nums[mid]==target)
12        {
13            first=mid;
14            right=mid-1;
15        }
16        else if(nums[mid]<target)
17        {
18            left=mid+1;
19        }
20        else
21        {
22            right=mid-1;
23        }
24       }
25       left=0;
26       right=nums.size()-1;
27       while(left<=right)
28       {
29        int mid=left+(right-left)/2;
30        if(nums[mid]==target)
31        {
32            last=mid;
33            left=mid+1;
34        }
35        else if(nums[mid]<target)
36        {
37            left=mid+1;
38        }
39        else
40        {
41            right=mid-1;
42        }
43       }
44     return{first,last};
45    }
46   
47};