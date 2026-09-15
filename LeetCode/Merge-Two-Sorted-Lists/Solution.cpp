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
16        while(list1!=NULL && list2!=NULL)
17        {
18            if(list1->val<list2->val)
19            {
20                curr->next=list1;
21                list1=list1->next;
22            }
23            else
24            {
25                curr->next=list2;
26                list2=list2->next;
27            }
28            curr=curr->next;
29        }
30            if(list1!=NULL)
31            {
32                curr->next=list1;
33            }
34            else
35            {
36                curr->next=list2;
37            }
38        return dummy->next;
39    }
40};