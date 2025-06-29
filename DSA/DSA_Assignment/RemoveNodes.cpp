#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        if (!head) return NULL;
        
        head->next = removeNodes(head->next);
        
        if (head->next && head->val < head->next->val)
            return head->next; 
        else
            return head;        
    }
};