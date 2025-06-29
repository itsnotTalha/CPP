#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tmp1 = headA;
        ListNode *tmp2 = headB;
        
        while (tmp1!=tmp2) {
            if (tmp1)
            tmp1 = tmp1->next;
            else
            tmp1 = headB;
            if (tmp2)
            tmp2 = tmp2->next;
            else
            tmp2 = headA;
        }
        return tmp1; 
    }
};