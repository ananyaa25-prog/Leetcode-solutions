1class Solution {
2public:
3    vector<string> uncommonFromSentences(string s1, string s2) {
4        unordered_map<string,int> mp;
5        string word="";
6        vector<string>v;
7        for(int i=0;i<=s1.size();i++)
8        {
9            if(i==s1.size()||s1[i]==' ')
10            {
11                mp[word]++;
12                word="";
13            }
14            else
15            {
16                word+=s1[i]
17;            }
18        }
19        word="";
20        for(int i=0;i<=s2.size();i++)
21        {
22            if(i==s2.size()||s2[i]==' ')
23            {
24                mp[word]++;
25                word="";
26            }
27            else
28            {
29                word+=s2[i];
30            }
31        }
32        for(auto x:mp)
33        {
34            if(x.second==1)
35            {
36                v.push_back(x.first);
37            }
38
39        }
40        return v;
41    }
42};