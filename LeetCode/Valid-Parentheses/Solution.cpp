1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char>st;
5        int n=s.size();
6        for(int i=0;i<n;i++)
7        {
8            if(s[i]=='('||s[i]=='{'||s[i]=='[')//opening
9            {
10                st.push(s[i]);
11            }
12            else
13            {
14               if(st.size()==0)
15               {
16                return false;
17               }
18               if(st.top()=='('&& s[i]==')'||
19                  st.top()=='{'&& s[i]=='}'||
20                  st.top()=='['&& s[i]==']')
21                  {
22                    st.pop();
23                  }
24                else
25                {
26                    return false;
27                }
28            }
29        }
30        return st.size()==0;
31    }
32};