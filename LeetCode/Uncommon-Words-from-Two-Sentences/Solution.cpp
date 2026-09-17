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
16                word+=s1[i];            }
17        }
18        word="";
19        for(int i=0;i<=s2.size();i++)
20        {
21            if(i==s2.size()||s2[i]==' ')
22            {
23                mp[word]++;
24                word="";
25            }
26            else
27            {
28                word+=s2[i];
29            }
30        }
31        for(auto x:mp)
32        {
33            if(x.second==1)
34            {
35                v.push_back(x.first);
36            }
37
38        }
39        return v;
40    }
41};