1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        int n=nums.size();
5        unordered_set<int> st;
6        for(int i=0;i<n;i++)
7        {
8            if(st.find(nums[i])!=st.end())
9            {
10                return true;
11            }
12            st.insert(nums[i]);
13        }
14        return false;
15    }
16};