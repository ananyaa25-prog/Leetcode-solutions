1class Solution {
2public:
3    bool isIsomorphic(string s, string t) {
4      unordered_map<char,char>mp1;
5      unordered_map<char,char>mp2;
6      for(int i=0;i<s.size();i++)
7      {
8        char sc=s[i];
9        char tc=t[i];
10        if(mp1.find(sc)!=mp1.end())
11        {
12            if(mp1[sc]!=tc)
13            {
14                return false;
15            }
16        }
17        else
18        {
19            mp1[sc]=tc;
20        }
21        if(mp2.find(tc)!=mp2.end())
22        {
23            if(mp2[tc]!=sc)
24            {
25                return false;
26            }
27        }
28        else
29        {
30            mp2[tc]=sc;
31        }
32      }
33      return true;  
34    }
35};
36