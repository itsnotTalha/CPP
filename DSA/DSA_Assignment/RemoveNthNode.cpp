#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head) return NULL;
        int size = 0;
        ListNode* temp = head;
        while (temp) {
            size++;
            temp = temp->next;
        }

        if (n == size) {
            ListNode* tmp = head;
            head = head->next;
            delete tmp;
            return head;
        }

        int stop = size - n - 1; 
        temp = head;
        for (int i = 0; i < stop; i++) {
            temp = temp->next;
        }
        ListNode* dlt = temp->next;
        temp->next = temp->next->next;
        delete dlt;

        return head;
    }
};