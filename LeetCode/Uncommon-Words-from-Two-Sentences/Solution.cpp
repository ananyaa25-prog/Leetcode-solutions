1class Solution {
2public:
3    vector<string> uncommonFromSentences(string s1, string s2) {
4        unordered_map<string,int>mp;
5        vector<string> v;
6        string word="";
7        for(int i=0;i<=s1.size();i++)
8        {
9            if(i==s1.size()||s1[i]==' ')
10            {
11                mp[word]++;
12                word="";
13            }
14            else
15            word+=s1[i];
16        }
17        word="";
18        for(int i=0;i<=s2.size();i++)
19        {
20            if(i==s2.size()||s2[i]==' ')
21            {
22                mp[word]++;
23                word="";
24            }
25            else
26            word+=s2[i];
27        }
28        for(auto x:mp)
29        {
30            if(x.second==1)
31            {
32                v.push_back(x.first);
33            }
34        }
35        return v;
36    }
37};