1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
14        ListNode* dummy=new ListNode(0);
15        ListNode* curr=dummy;
16
17        while(list1!=NULL && list2!=NULL)
18        {
19            if(list1->val<list2->val)
20            {
21                curr->next=list1;
22                list1=list1->next;
23            }
24            else 
25            {
26                curr->next=list2;
27                list2=list2->next;
28            }
29            curr=curr->next;
30        }
31            if(list1!=NULL)
32            {
33                curr->next=list1;
34            }
35            if(list2!=NULL)
36            {
37                curr->next=list2;
38            }
39        
40        return dummy->next;
41       
42    }
43};