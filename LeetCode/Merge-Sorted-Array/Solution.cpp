1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4      nums1.resize(m);
5       for(int i=0;i<n;i++)
6       {
7            nums1.push_back(nums2[i]);
8       } 
9       sort(nums1.begin(),nums1.end());
10       for(int num:nums1)
11       {
12        cout<<num<<" ";
13       }
14    }
15};
16