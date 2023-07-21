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
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* head1=head;
        int size=0;
        while(head1){
            size++;
            head1=head1->next;
        }
        for(int i=0;i<size/2;i++){
            head=head->next;
        }
        return head;
    }
};