#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a;
        ListNode *tmp = head;
        while(tmp){
            a.push_back(tmp->val);
            tmp = tmp->next;
        }
        tmp = head;
        while(tmp){
            tmp->val = a.back();
            a.pop_back();
            tmp = tmp->next;
        }
        return head;
    }
};