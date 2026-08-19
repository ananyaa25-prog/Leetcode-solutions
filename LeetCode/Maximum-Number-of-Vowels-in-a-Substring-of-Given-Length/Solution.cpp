1class Solution {
2public:
3    int maxVowels(string s, int k) {
4        int ans=0;
5        int count=0;
6        for(int i=0;i<k;i++)
7        {
8          if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
9          {
10            count++;
11          }
12        }
13        ans=count;
14        for(int i=k;i<s.size();i++)
15        {
16            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
17            count++;
18            if(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u')
19            count--;
20         ans=max(ans,count);
21        }
22       
23        return ans;
24    }
25};