/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
struct ListNode
{
    int val;
    ListNode *next;
    /* data */
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int n1=0,n2=0;
        int i = 0;
        while (l1) {
            n1 += (l1->val * pow(10, i));
            l1 = l1->next;
            i++;
        }

        i = 0;
        while (l2) {
            n2 += (l2->val * pow(10, i));
            l2 = l2->next;
            i++;
        }

        long long sum = n1 + n2;

        int temp = sum % 10;
        sum /= 10;
        ListNode* ans = new ListNode(temp);
        ListNode* tail = ans;
t
        while (sum) {
            int temp = sum % 10;
            sum /= 10;
            tail->next = new ListNode(temp);
            tail = tail->next;
        }
        return ans;
    }
};