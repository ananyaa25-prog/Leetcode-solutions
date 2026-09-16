1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int n=nums.size();
5        int count0=0;
6        int count1=0;
7        int count2=0;
8        for(int i=0;i<n;i++)
9        {
10            if(nums[i]==0)
11            {
12                count0++;
13            }
14            else if(nums[i]==1)
15            {
16                count1++;
17            }
18            else
19            {
20                count2++;
21            }
22        }
23        int i=0;
24        
25            while(count0>0)
26            {
27                nums[i]=0;
28                i++;
29                count0--;
30            }
31            while(count1>0)
32            {
33                nums[i]=1;
34                i++;
35                count1--;
36            }
37            while(count2>0)
38            {
39                nums[i]=2;
40                i++;
41                count2--;
42            }
43        
44    }
45};