1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        unordered_map<string,vector<string>>mp;
5        vector<vector<string>>ans;
6        for(string word:strs)
7        {
8            string key=word;
9            sort(key.begin(),key.end());
10            mp[key].push_back(word);
11        }
12        for(auto x:mp)
13        {
14            ans.push_back(x.second);
15        }
16        return ans;
17    }
18};