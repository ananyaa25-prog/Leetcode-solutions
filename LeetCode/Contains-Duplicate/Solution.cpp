1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set<int> st;
5        for(int i=0;i<nums.size();i++)
6        {
7            if(st.count(nums[i]))
8            {
9                return true;
10            }
11            st.insert(nums[i]);
12        }
13        return false;
14    }
15};