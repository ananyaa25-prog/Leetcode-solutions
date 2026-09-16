1class Solution {
2public:
3    bool isValid(string s) {
4       stack<char>st;
5       int n=s.size();
6       for(int i=0;i<n;i++)
7       {
8        if(s[i]=='('||s[i]=='{'||s[i]=='[')//opening bracket then push in stack
9        {
10            st.push(s[i]);
11        }
12        else
13        {
14            if(st.size()==0)//if no closing brackets then simply return false
15            {
16                return false;
17            }
18            if(st.top()=='{' && s[i]=='}'||
19               st.top()=='(' && s[i]==')'||
20               st.top()=='[' && s[i]==']')//if the top of the stack and the current element is a pair then pop mean matchedd
21               {
22                st.pop();
23               }
24            else
25            {
26                return false;//when match not found then return false
27            }
28        }
29       }
30       return st.size()==0; //if all elements macthed and then at end stack ka size =0 means true toh isliye.
31    }
32};