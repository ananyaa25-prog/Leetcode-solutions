1class Solution {
2public:
3    bool isPalindrome(string s) {
4        string cleaned;
5    for(char c:s)
6    {
7        c=tolower(c);
8        if(isalnum(c))
9        {
10            cleaned+=c;
11           
12        }
13       
14    }
15    string reversed(cleaned.rbegin(),cleaned.rend());
16    if(reversed==cleaned)
17    {
18        return true;
19    }
20    return false;
21    }
22};