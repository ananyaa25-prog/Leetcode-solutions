1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4      vector<int> v;
5      int count=0;
6      for(int i=0;i<nums.size();i++)
7      {
8       if(nums[i]==0)
9       {
10        count++;
11       }
12       else
13       {
14        v.push_back(nums[i]);
15       }
16      }  
17      int i=0;
18     for(int x:v)
19     {
20        nums[i]=x;
21        i++;
22     }
23     while(count!=0)
24     {
25        nums[i]=0;
26        i++;
27        count--;
28     }
29    }
30};