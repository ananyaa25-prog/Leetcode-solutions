1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        nums1.resize(m); 
5        for(int i=0;i<n;i++)
6        {
7            nums1.push_back(nums2[i]);
8        } 
9        sort(nums1.begin(),nums1.end());
10        for(int k=0;k<m+n;k++)
11        {
12            if(nums1[k]!=0)
13            {
14                cout<<nums1[k];
15            }
16            
17        }
18    }
19};