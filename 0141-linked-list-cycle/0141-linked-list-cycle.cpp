/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head||!head->next) return 0;
        ListNode* slow=head;
        head=head->next;
        while(head && head->next){
            slow=slow->next;
            head=head->next->next;
            if(slow==head) return 1;
        }
        return 0;
    }
};