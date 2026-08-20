1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        int n=nums.size();
5        unordered_set<int> st;
6        for(int x:nums)
7        {
8            if(st.find(x)!=st.end())
9            {
10                return true;
11            }
12            st.insert(x);
13        }
14        return false;
15    }
16};
17