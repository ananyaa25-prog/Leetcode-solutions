1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        int l=0;
5        int r=numbers.size()-1;
6        while(l<r)
7       {
8            int sum=numbers[l]+numbers[r];
9            if(sum==target)
10            {
11                return{l+1,r+1};
12            }
13            if(sum<target)
14            l++;
15            else
16            r--;
17       }
18       return {};
19    }
20};