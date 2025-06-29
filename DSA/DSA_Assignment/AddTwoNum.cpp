#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *tmp = l1;
        string s1="";
        while(tmp){
            s1+=to_string(tmp->val);
            tmp = tmp->next;
        }
        delete tmp;
        reverse(s1.begin(), s1.end());
        
        ListNode *tmp = l2;
        string s2="";
        while(tmp){
            s2+=to_string(tmp->val);
            tmp = tmp->next;
        }
        reverse(s2.begin(), s2.end());
        int ans //onek boro hoye jabe
    }
};