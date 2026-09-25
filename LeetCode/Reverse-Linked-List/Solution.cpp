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
13    ListNode* reverseList(ListNode* head) {
14        ListNode* curr=head;
15        ListNode* prev=NULL;
16        ListNode* next=NULL;
17
18        while(curr!=NULL)
19        {
20            next=curr->next;
21            curr->next=prev;
22
23            prev=curr;
24            curr=next;
25        }
26        return prev;
27    }
28};