1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        vector<int> freq(26,0);
5        for(char c:s)
6        {
7            freq[c-'a']++;
8        }
9        for(char c:t)
10        {
11            freq[c-'a']--;
12        }
13        for(int x:freq)
14  {
15    if(x!=0)
16    {
17        return false;
18    }
19    
20  }
21  return true;
22    }
23};