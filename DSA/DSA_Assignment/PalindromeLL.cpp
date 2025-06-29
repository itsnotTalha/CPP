#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL) return true;

        int count = 0;
        ListNode* tmp = head;
        while (tmp) {
            count++;
            tmp = tmp->next;
        }

        for (int i = 0; i < count / 2; i++) {
            ListNode* start = head;
            for (int s = 0; s < i; s++) {
                start = start->next;
            }
            ListNode* end = head;
            for (int e = 0; e < count - i - 1; e++) {
                end = end->next;
            }
            if (start->val != end->val) {
                return false; 
            }
        }
        return true;
    }
};