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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* h1=l1;
        ListNode* h2=l2;
        ListNode* ans=new ListNode();
        ListNode* head=ans;
        int carry=0;
        while(l1||l2){
            int sum;
            if(l1&&l2) {
                sum=l1->val+l2->val;
                l1=l1->next;
                l2=l2->next;
            }
            else if(l1&&!l2){
                sum=l1->val;
                l1=l1->next;
            }
            else if(!l1&&l2) {
                sum =l2->val;
                l2=l2->next;
            }
            ListNode* temp=new ListNode((sum+carry)%10);
            head->next=temp;
            carry=((sum+carry)/10)%10;
            head=head->next;
        }
        if(carry!=0){
            ListNode* temp=new ListNode((carry)%10);
            head->next=temp;
        }
        return ans->next;
    }
};