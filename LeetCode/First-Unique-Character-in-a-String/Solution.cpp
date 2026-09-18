1class Solution {
2public:
3    int firstUniqChar(string s) {
4      unordered_map<char,int>mp;
5      for(int i=0;i<s.size();i++)
6      {
7        mp[s[i]]++;
8      }  
9      for(int i=0;i<s.size();i++)
10      {
11        if(mp[s[i]]==1)
12        {
13            return i;
14        }
15      }
16      return -1;
17    }
18};