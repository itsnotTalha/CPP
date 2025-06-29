#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        
        ListNode* crnt = head;

        while(crnt->next != NULL){
            if(crnt->val == crnt->next->val){
                ListNode* tmp = crnt->next;
                crnt->next = tmp->next;
                delete tmp;
            }
            else
                crnt = crnt->next;
        }
        return head;
    }
};