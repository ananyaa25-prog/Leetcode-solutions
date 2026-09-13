1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4      unordered_map<char,int> mp1;
5      unordered_map<char,int> mp2;
6        for(char c1:s)
7        {
8            mp1[c1]++;
9        }
10        for(char c2:t )
11        {
12            mp2[c2]++;
13        }
14        if(mp1==mp2)
15        {
16            return true;
17        }
18        return false;
19    }
20};