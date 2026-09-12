1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4      unordered_map<char,int> mp1;
5      unordered_map<char,int>mp2;
6      for(char x:s)
7      {
8        mp1[x]++;
9      }  
10      for(char y:t)
11      {
12        mp2[y]++;
13      }
14      if(mp1==mp2)
15      {
16        return true;
17      }
18      return false;
19    }
20};