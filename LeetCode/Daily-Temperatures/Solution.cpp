1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4        vector<int>ans(temperatures.size(),0);
5        stack<int>st;
6        for(int i=0;i<temperatures.size();i++)
7        {
8            while(!st.empty()&& temperatures[i]>temperatures[st.top()])
9            {
10                int index=st.top();
11                st.pop();
12                ans[index]=i-index;
13            }
14            st.push(i);
15        }
16        return ans;
17    }
18};