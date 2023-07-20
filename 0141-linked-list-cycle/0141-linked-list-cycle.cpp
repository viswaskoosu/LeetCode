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
        ListNode* realhead=head;
        if(!head||!head->next) return 0;
        vector<int> a;
        while(head){
            if(isin(a,head,realhead)) return 1;
            a.push_back(head->val);
            head=head->next;
        }
        return 0;
    }
    bool isin(vector<int> a,ListNode* head,ListNode* realhead){
        ListNode* head1=realhead;
        // head1=head1->next;
        int ans=0;
        for(int j=0;j<a.size();j++){
            if(a[j]==head->val){
                if(head1==head){
                    return 1;
                }
            }
            head1=head1->next;
        }
        return 0;
    }
};