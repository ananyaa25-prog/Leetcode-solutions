1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set<int> st;
5        for(int x:nums)
6        {
7            if(st.count(x))
8            {
9                return true;
10            }
11            st.insert(x);
12        }
13        return false;
14    }
15};