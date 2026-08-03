1class Solution {
2public:
3    bool isValid(string s) {
4       stack<char>st;
5       for(char c:s)
6       {
7        if(c=='('||c=='{'||c=='[')
8        {
9            st.push(c);
10        }
11        else
12        {
13            if(st.empty())
14            {
15                return false;
16            }
17            if((c==')'&& st.top()!='(') ||
18               (c=='}'&& st.top()!='{')||
19               (c==']'&& st.top()!='['))
20               {
21                return false;
22               }
23               st.pop();
24        }
25        
26       }
27       return st.empty();
28    }
29};