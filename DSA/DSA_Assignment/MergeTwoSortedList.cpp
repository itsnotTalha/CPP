#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* tmp = new ListNode(0);
        ListNode* tail = tmp;

        while (list1 and list2) {
            if (list1->val < list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }
        if(list1)
            tail->next = list1;
        else
            tail->next = list2;


        return tmp->next;
    }
};