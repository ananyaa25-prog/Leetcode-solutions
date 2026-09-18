1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        for(int i=0;i<n;i++)
5        {
6            nums1[m+i]=nums2[i];
7        }
8        sort(nums1.begin(),nums1.end());
9    }
10};