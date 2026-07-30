1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int m=matrix.size();
5        int n=matrix[0].size();
6        //consider matrix as one long 1 d array
7        int low=0;
8        int high=m*n-1;//last element 
9        while(low<=high)
10        {
11            int mid=low+(high-low)/2;//same as low+high/2 just overflow ke wajah se
12            int row=mid/n;
13            int col=mid%n;
14            if(matrix[row][col]==target)
15            {
16                return true;
17            }
18            if(matrix[row][col]<target)
19            {
20                low=mid+1;
21            }
22            else
23            {
24                high=mid-1;
25            }
26        }
27        return false;
28    }
29};