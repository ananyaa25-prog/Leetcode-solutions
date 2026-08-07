1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4       vector<int>ans;
5       sort(nums.begin(),nums.end());
6       int n=nums.size();
7       for(int i=0;i<n;i++)
8       {
9        int count=1;
10        while(i+1<n&& nums[i]==nums[i+1])
11        {
12            count++;
13            i++;
14        }
15        if(count>n/3){
16        ans.push_back(nums[i]);
17       } 
18       }
19       return ans;
20    }
21};
22