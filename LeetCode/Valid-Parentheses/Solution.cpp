1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char>st;
5        for(int i=0;i<s.size();i++)
6        {
7            if(s[i]=='('||s[i]=='{'||s[i]=='[')
8            {
9                st.push(s[i]);
10            }
11            else
12            {
13                if(st.empty())
14                {
15                    return false;
16                }
17                if(s[i]==')'&& st.top()=='('||
18                   s[i]=='}'&& st.top()=='{'||
19                   s[i]==']'&& st.top()=='[')
20                {
21                    st.pop();
22                }
23                else
24                {
25                    return false;
26                }
27            }
28        }
29        if(st.empty())
30        {
31            return true;
32        }
33        return false;
34    }
35};