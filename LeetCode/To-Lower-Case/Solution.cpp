1class Solution {
2public:
3    string toLowerCase(string s) {
4       for(char &c:s)
5       {
6        c=tolower(c);
7       } 
8       return s;
9    }
10};