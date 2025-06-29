#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode *tmp = head;
        string s="";
        while(tmp){
            s+=to_string(tmp->val);
            tmp = tmp->next;
        }
        return stoi(s, nullptr, 2);
    }
};